#ifndef BITTYWORD_H
#define BITTYWORD_H

#include <Arduino.h>


class BittyWord {

	struct Bits
	{
		uint8_t     b0:1,
					b1:1,
					b2:1,
					b3:1, 
					b4:1,
					b5:1, 
					b6:1, 
					b7:1,
					b8:1,
					b9:1,
					b10:1, 
					b11:1,
					b12:1, 
					b13:1, 
					b14:1,
					b15:1;
	};
	
	union WordBits
	{
		Bits bits;
		uint8_t byte_[2];
		uint16_t word_;
	};


public:

	BittyWord();
	
	void setBit(uint8_t bitNo,bool newState);
	bool getBit(uint8_t bitNo);
	bool toggleBit(uint8_t bitNo);  //returns new bit state
	
	void setByte(uint8_t byteNo, uint8_t newValue);
	uint8_t getByte(uint8_t byteNo);  
	
	void setWord(uint16_t value);
	uint16_t getWord();
	
	void setLSB(uint8_t newLSB);
	void setMSB(uint8_t newMSB);
	uint8_t getMSB();
	uint8_t getLSB();

	
private:
	
	WordBits wb;
	
};

#endif
