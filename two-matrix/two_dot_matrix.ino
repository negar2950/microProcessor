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
int maxInUse = 2;

MaxMatrix m(DIN, CS, CLK, maxInUse);

byte pakman[] = {8, 8, 0x1c, 0x22, 0x41, 0x49, 0x55, 0x22, 0x00, 0x08};

void setup() {
  m.init();
  m.setIntensity(2);
}
void loop(){
  m.writeSprite(0, 0, pakman);
  delay(300);
  for (int i = 0; i < 8; i++) {
    m.shiftRight(false, true);
    delay(300);
  }
  m.clear();

}