class SEG {
  public:
     RUN(char *part,int num) {
//          SEG 1
    pinMode(9, OUTPUT);
//          SEG 2 
    pinMode(10, OUTPUT);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);

    int A = 0, B = 1, C = 2, D = 3,  E = 4, F = 5,G = 6;
    int PIN_OUT[] = {A = 0, B = 1, C = 2, D = 3,  E = 4, F = 5,G = 6};
//              A B C D E F G
    int _0[] = {1,1,1,1,1,1,0};
    int _1[] = {0,1,1,0,0,0,0};
    int _2[] = {1,1,0,1,1,0,1};
    int _3[] = {1,1,1,1,0,0,1};
    int _4[] = {0,1,1,0,0,1,1};
    int _5[] = {1,0,1,1,0,1,1};
    int _6[] = {1,0,1,1,1,1,1};
    int _7[] = {1, 1, 1, 0, 0, 0, 0};
    int _8[] = {1, 1, 1, 1, 1, 1, 1};
    int _9[] = {1,1,1,1,0,1,1};
    byte _set[] = {"B0000001"};
////////////////////////////////////////
      

         
    if(part=="1"){
        digitalWrite(10,LOW);
        delay(7);
      }
      else if(digitalRead(9)==LOW){
         digitalWrite(10,HIGH);
        }
      if(part=="2"){
        digitalWrite(9,LOW);
        delay(7);
      }
      else if(digitalRead(10)==LOW){
         digitalWrite(9,HIGH);
        }





      
     
    
      if (num == 0) {
        for (int x = 0; x < 7; x++) {
          pinMode(PIN_OUT[x], OUTPUT);
          digitalWrite(PIN_OUT[x], _0[x]);
        }
      }
       if (num == 1) {
        for (int x = 0; x < 7; x++) {
          pinMode(PIN_OUT[x], OUTPUT);
          digitalWrite(PIN_OUT[x], _1[x]);
        }
      }
       if (num == 2) {
        for (int x = 0; x < 7; x++) {
          pinMode(PIN_OUT[x], OUTPUT);
          digitalWrite(PIN_OUT[x], _2[x]);
        }
      }
       if (num == 3) {
        for (int x = 0; x < 7; x++) {
          pinMode(PIN_OUT[x], OUTPUT);
          digitalWrite(PIN_OUT[x], _3[x]);
        }
      }
       if (num == 4) {
        for (int x = 0; x < 7; x++) {
          pinMode(PIN_OUT[x], OUTPUT);
          digitalWrite(PIN_OUT[x], _4[x]);
        }
      }
       if (num == 5) {
        for (int x = 0; x < 7; x++) {
          pinMode(PIN_OUT[x], OUTPUT);
          digitalWrite(PIN_OUT[x], _5[x]);
        }
      }
       if (num == 6) {
        for (int x = 0; x < 7; x++) {
          pinMode(PIN_OUT[x], OUTPUT);
          digitalWrite(PIN_OUT[x], _6[x]);
        }
      }
       if (num == 7) {
        for (int x = 0; x < 7; x++) {
          pinMode(PIN_OUT[x], OUTPUT);
          digitalWrite(PIN_OUT[x], _7[x]);
        }
      }
       if (num == 8) {
        for (int x = 0; x < 7; x++) {
          pinMode(PIN_OUT[x], OUTPUT);
          digitalWrite(PIN_OUT[x], _8[x]);
        }
      }
       if (num == 9) {
        for (int x = 0; x < 7; x++) {
          pinMode(PIN_OUT[x], OUTPUT);
          digitalWrite(PIN_OUT[x], _9[x]);
        }
      }
         /*   else{
        for (int x = 0; x < 7; x++) {
          pinMode(PIN_OUT[x], OUTPUT);
          digitalWrite(PIN_OUT[x], _set[x]);
          delay(100);
          digitalWrite(PIN_OUT[x],LOW);
          delay(100);
        }
      }*/
     }   
       
  
  
  
  










 
};
