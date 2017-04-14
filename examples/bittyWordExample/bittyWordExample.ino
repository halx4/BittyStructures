#include <BittyWord.h>

BittyWord bw;

void setup(){
  Serial.begin(9600);
  bw.getWord()==0?ok():fail();

  bw.setByte(0,0xa3);
  bw.setByte(1,0x5f);
  bw.getWord()==0x5fa3?ok():fail();
  
  
  }

void loop(){}

void ok(){
  Serial.println("test ok");
}

void fail(){
  Serial.println("fail");
}
