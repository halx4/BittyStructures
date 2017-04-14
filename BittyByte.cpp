#include "BittyByte.h"


BittyByte::BittyByte(){
	setByte(0);
	
}
//-------------------------------
void BittyByte::setBit(uint8_t bitNo,bool newState){

	uint8_t newValue;
	newValue=newState?1 : 0;
	
	switch(bitNo){
	case 0:
		wb.bits.b0=newValue;
		break;
	case 1:
		wb.bits.b1=newValue;
		break;
	case 2:
		wb.bits.b2=newValue;
		break;
	case 3:
		wb.bits.b3=newValue;
		break;
	case 4:
		wb.bits.b4=newValue;
		break;
	case 5:
		wb.bits.b5=newValue;
		break;
	case 6:
		wb.bits.b6=newValue;
		break;
	case 7:
		wb.bits.b7=newValue;
		break;                                   
	}

}
//-------------------------------
bool BittyByte::getBit(uint8_t bitNo){

	switch(bitNo){
	case 0:
		return wb.bits.b0;
	case 1:
		return wb.bits.b1;
	case 2:
		return wb.bits.b2;
	case 3:
		return wb.bits.b3;
	case 4:
		return wb.bits.b4;
	case 5:
		return wb.bits.b5;
	case 6:
		return wb.bits.b6;
	case 7:
		return wb.bits.b7;  
	default:
		return NULL;
	}
}
//-------------------------------
bool BittyByte::toggleBit(uint8_t bitNo){
	setBit(bitNo,!getBit(bitNo));  
	return getBit(bitNo);     
}
//--------------------------------
void BittyByte::setByte(uint8_t newValue){
	
	wb.byte_=newValue;
	
}
//--------------------------------

uint8_t BittyByte::getByte(){
	
	return wb.byte_;

}
//--------------------------------

