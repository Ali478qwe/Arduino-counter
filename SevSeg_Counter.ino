#include "SevSeg.h"
SevSeg sevseg;
unsigned long start_time;
unsigned long current_time;
const unsigned long period = 1000;
int value = 0;
int increment = 20;

void setup() {
  byte numDigits = 2;
  byte digitPins[] = {10, 9};
  byte segmentPins[] = {0,1,2,3,4,5,6};
  bool resistorsOnSegments = false;
  byte Config = COMMON_CATHODE;


  sevseg.begin(Config, numDigits, digitPins, segmentPins, resistorsOnSegments);
 start_time = millis();
}

void loop() {
  current_time = millis();
  if (current_time - start_time >= period) {
    value += increment ;
    start_time = current_time;
    
    
  }
//////////////////////////////////
  if (value >= 99) {
    value = 0;
    increment -= 5;
  }
  sevseg.setNumber(value);
  sevseg.refreshDisplay();
}
