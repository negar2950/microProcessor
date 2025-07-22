/* 
 
MQ9 Calibration 
 
modified on 19 Feb 2019 
by Saeed Hosseini 
Home<iframe class="wp-embedded-content" sandbox="allow-scripts" security="restricted" style="position: absolute; clip: rect(1px, 1px, 1px, 1px);" title="&#8220;Home&#8221; &#8212; آکادمی کافه ربات | آموزش الکترونیک و رباتیک" src="https://thecaferobot.com/learn/embed/#?secret=7ezg2jJrFJ" data-secret="7ezg2jJrFJ" width="600" height="338" frameborder="0" marginwidth="0" marginheight="0" scrolling="no"></iframe> 
 
*/ 
 
void setup() { 
  Serial.begin(9600); 
} 
  
void loop() { 
    float sensorValue;
    float sensorValue1;
  sensorValue = analogRead(A0);
  sensorValue1 = (sensorValue/1024.0)*5.0;
  Serial.print("MQ-9 value:");
  Serial.println(sensorValue1);
}