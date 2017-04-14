#ifndef BITTYDWORD_H
#define BITTYDWORD_H

#include <Arduino.h>


class BittyDWord {

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
					b15:1,
					b16:1,
					b17:1,
					b18:1,
					b19:1, 
					b20:1,
					b21:1, 
					b22:1, 
					b23:1,
					b24:1,
					b25:1,
					b26:1, 
					b27:1,
					b28:1, 
					b29:1, 
					b30:1,
					b31:1;
	};
	
	union WordBits
	{
		Bits bits;
		uint32_t dword_;
		uint16_t word_[2];
		uint8_t byte_[4];
	};


public:

	BittyDWord();
	
	void setBit(uint8_t bitNo,bool newState);
	bool getBit(uint8_t bitNo);
	bool toggleBit(uint8_t bitNo);   
	
	void setByte(uint8_t byteNo, uint8_t newValue);
	uint8_t getByte(uint8_t byteNo);
		
	void setWord(uint8_t byteNo,uint16_t value);
	uint16_t getWord(uint8_t byteNo);
	
	void setDWord(uint32_t value);
	uint32_t getDWord();
	
private:
	
	WordBits wb;

};

#endif
