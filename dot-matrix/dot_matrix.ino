/*
  8x8 Dot Matrix w/ MAX7219
  modified on 7 March 2019
  by Saeed Hosseini @ Electropeak
  Home<iframe class="wp-embedded-content" sandbox="allow-scripts" security="restricted" style="position: absolute; clip: rect(1px, 1px, 1px, 1px);" src="https://electropeak.com/learnfarsi/embed/#?secret=eT11uBIAME" data-secret="eT11uBIAME" width="600" height="338" title="&#8220;Home&#8221; &#8212; آکادمی کافه ربات | آموزش الکترونیک و رباتیک" frameborder="0" marginwidth="0" marginheight="0" scrolling="no"></iframe>
*/
#include <MaxMatrix.h>


int DIN = 7;
int CLK = 6;
int CS = 5;
int maxInUse = 1;

byte buffer[20];
char text[] = "a";

MaxMatrix m(DIN, CS, CLK, maxInUse);

void setup() {
  m.init();
  m.setIntensity(8);
}
void loop() {
  m.setDot(0, 7, true);

  m.setDot(0, 7, true);
  delay(1000);
  m.setDot(7, 0, true);
  delay(1000);
  m.setColumn(3, B11110000);
  delay(1000);
  m.setColumn(4, B00001111);
  delay(1000);
  m.clear();
  delay(1000);
}