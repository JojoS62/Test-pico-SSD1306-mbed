#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <mbed.h>

using namespace mbed;
using namespace rtos;
using namespace std::chrono_literals;

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET     3 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1, 400000UL);

Thread gui_thread;
DigitalOut testPin(p3);

class Bouncer {
  public:
    Bouncer(Adafruit_SSD1306 &disp, int startPos, int startDir) :
      disp(disp) {
        pos = startPos;
        dir = startDir;
      };

    void draw() {
      disp.drawFastVLine(pos, 0, SCREEN_HEIGHT, SSD1306_BLACK);
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

void gui_function() {
  Bouncer b1(display, 0, 1);
  Bouncer b2(display, SCREEN_WIDTH-1, -1);
  Bouncer b3(display, 0, 2);
  Bouncer b4(display, SCREEN_WIDTH-1, -2);
  Bouncer b5(display, 0, 3);
  Bouncer b6(display, SCREEN_WIDTH-1, -3);

  while(1) {
    b1.draw();
    b2.draw();
    b3.draw();
    b4.draw();
    b5.draw();
    b6.draw();

    testPin = 1;
    display.display();
    testPin = 0;
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

  gui_thread.start(gui_function);
}

void loop() {
  Serial.println(F("Hello from Pico with Mbed"));
  delay(2000);
}