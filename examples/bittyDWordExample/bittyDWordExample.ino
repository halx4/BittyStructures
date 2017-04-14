#include <BittyDWord.h>

BittyDWord bdw;

void setup(){
  Serial.begin(9600);
  bdw.getDWord()==0?ok():fail();

  bdw.setByte(3,0x5f);
  bdw.setByte(2,0x4d);
  bdw.setByte(1,0x37);
  bdw.setByte(0,0x6);
  
  bdw.getDWord()==0x5f4d3706?ok():fail();
  
  
  }

void loop(){}

void ok(){
  Serial.println("test ok");
}

void fail(){
  Serial.println("fail");
}
