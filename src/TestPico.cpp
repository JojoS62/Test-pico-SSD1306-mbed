#include <mbed.h>
#include <vector>

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSerifItalic18pt7b.h>
#include "myFont.h"
#include "DS1820.h"

using namespace mbed;
using namespace rtos;
using namespace std::chrono_literals;
using namespace std;

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET     3 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1, 1200000UL);
DS1820 probe(p15);
float dsTemp_1;


Thread io_thread;
Thread gui_thread;
Thread event_thread;
events::EventQueue queue;
DigitalOut relais(p10);

enum  PowerState : int { on = 0, off = 1};
class DrawBase {
public:
  //DrawBase() = delete;
  virtual void draw() = 0;
};

class Bouncer : public DrawBase {
  public:
    Bouncer(Adafruit_SSD1306 &disp, int startPos, int startDir) :
      disp(disp) {
        pos = startPos;
        dir = startDir;
      };

    virtual void draw() {
      pos += dir;

      if (dir > 0) {
        if (pos >= SCREEN_WIDTH) {
          pos = SCREEN_WIDTH-1;   // limit to max
          dir *= -1;
        }
      } else {
        if (pos <= 0) {
          pos = 0;
          dir *= -1;
        }
      }
      disp.drawFastVLine(pos, 0, SCREEN_HEIGHT, SSD1306_WHITE);
    }; 

  private:
    Adafruit_SSD1306 &disp;
    int pos;
    int dir;
};

void gui_thread_fn() {
 // setup

  DigitalOut testPin(p3);
  vector<DrawBase*> drawlist;     // list for draw objects

  // add some objects
  drawlist.push_back(new Bouncer(display, 0, 1));
  drawlist.push_back(new Bouncer(display, SCREEN_WIDTH-1, -1));
  drawlist.push_back(new Bouncer(display, 0, 2));
  drawlist.push_back(new Bouncer(display, SCREEN_WIDTH-1, -2));
  drawlist.push_back(new Bouncer(display, 0, 3));
  drawlist.push_back(new Bouncer(display, SCREEN_WIDTH-1, -3));

  display.clearDisplay();
  display.setFont(&Dialog_plain_16);
  display.setTextColor(SSD1306_WHITE);

  // loop  
  while(1) {
    testPin = 1;
  
    // // draw all objects
    // for(auto obj : drawlist) {
    //   (*obj).draw();
    // }
    // testPin = 0;

    // testPin = 1;
    
    display.clearDisplay();
    display.setCursor(0, 32);
    display.print(dsTemp_1);
    display.display();


    testPin = 0;

    ThisThread::sleep_for(1000ms);
 }
}

void io_thread_fn() {
  // setup
  DigitalOut  led(p6);

  // loop
  while(true) {
    led = !led;
    ThisThread::sleep_for(100ms);
  }
}

void setup() {
  Serial.begin(9600);
  Serial.println(F("Hello from Pico"));

  Wire.setClock(10000L);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS, OLED_RESET)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Don't proceed, loop forever
  }

  // Clear the buffer
  display.clearDisplay();

  gui_thread.start(gui_thread_fn);
  io_thread.start(io_thread_fn);
  event_thread.start(callback(&queue, &events::EventQueue::dispatch_forever));

  relais = PowerState::on;
  queue.call_in(2s, [](){ 
        relais = PowerState::off;
      }
    );
}

DigitalOut  led(LED1);

void loop() {
  probe.convertTemperature(true, DS1820::all_devices);         //Start temperature conversion, wait until ready

  dsTemp_1 = probe.temperature();
  printf("It is %3.1foC\r\n", dsTemp_1);
  Serial.println(dsTemp_1);

  led = !led;
  delay(2000);
}
