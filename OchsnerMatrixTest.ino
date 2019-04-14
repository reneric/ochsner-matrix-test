#include <SPI.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(8, 8, 3, 2, 17,
  NEO_TILE_TOP   + NEO_TILE_LEFT   + NEO_TILE_ROWS   + NEO_TILE_PROGRESSIVE +
  NEO_MATRIX_TOP + NEO_MATRIX_LEFT + NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
  NEO_GRB + NEO_KHZ800);


void setup() {
  Serial.begin(9600);
  matrix.begin();

  matrix.setBrightness(50);
}

void loop() {
  matrix.fillScreen(matrix.Color(255,255,255));
  
  matrix.show();
  delay(100);
}
