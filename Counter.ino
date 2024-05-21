#include "SEG.h"
/////////////////////////////////////////////
SEG io;
unsigned long start_time;
unsigned long current_time;
const unsigned long period = 1000;
int value = 0;
int increment = 20;
int num_1 = 0;
int num_2 = 0;
////////////////////////////////////////////
void setup() {
  start_time = millis();
  Serial.begin(9600);
}

void loop() {
////////////////////////////////////////////
  current_time = millis();
  if (current_time - start_time >= period) {
    value += increment ;
    start_time = current_time;
    Serial.println(current_time);
    
  }
//////////////////////////////////
  if (value >= 99) {
    value = 0;
    increment -= 5;
  }
/////////////////////////////////
  num_1 = value % 10;
  num_2 = value / 10;
  io.RUN("1", num_1);
  io.RUN("2", num_2);
}
