#ifndef BITTYBYTE_H
#define BITTYBYTE_H

#include <Arduino.h>


class BittyByte {

	struct Bits
	{
		uint8_t     b0:1,
					b1:1,
					b2:1,
					b3:1, 
					b4:1,
					b5:1, 
					b6:1, 
					b7:1;
	};
	
	union WordBits
	{
		Bits bits;
		uint8_t byte_;
	};

public:

	BittyByte();
	
	void setBit(uint8_t bitNo,bool newState);
	bool getBit(uint8_t bitNo);
	bool toggleBit(uint8_t bitNo);  //returns new bit state
	
	void setByte(uint8_t newValue);
	uint8_t getByte(); 
	
	
private:
	
	WordBits wb;
	
};

#endif
