#include "BittyWord.h"
#include "BittyDWord.h"

BittyWord bw;
BittyDWord bdw;
int i=0;
void setup() {
          // put your setup code here, to run once:
        Serial.begin(9600);

        
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(bw.getByte(i++));
delay(100);
}
