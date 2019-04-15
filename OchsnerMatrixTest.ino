#include <SPI.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

/******* BRIGHTNESS PERCENTAGE *******/
const int BRIGHTNESS_PERCENT = 70;


Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(8, 8, 3, 2, 17,
  NEO_TILE_TOP   + NEO_TILE_LEFT   + NEO_TILE_ROWS   + NEO_TILE_PROGRESSIVE +
  NEO_MATRIX_TOP + NEO_MATRIX_LEFT + NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
  NEO_GRB + NEO_KHZ800);

const int MAX_BRIGHTNESS = 255;
int brightness = 50;

void setup() {
  Serial.begin(9600);
  matrix.begin();
  brightness = (BRIGHTNESS_PERCENT/100) * MAX_BRIGHTNESS;
  matrix.setBrightness(brightness);
}

void loop() {
  matrix.fillScreen(matrix.Color(255,255,255));
  
  matrix.show();
  delay(100);
}
