#include <BittyByte.h>

void setup() {
	Serial.begin(9600);
	BittyByte bb;
	bb.setByte(0);

	for(int i=0;i<8;i++){
		bb.toggleBit(i);
		Serial.println(bb.getByte(),BIN); 
	}

	for(int i=7;i>0;i--){
		bb.setBit(i,0);
		Serial.println(bb.getByte(),BIN); 
	}
	
}

void loop() {}