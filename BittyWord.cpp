#include "BittyWord.h"


BittyWord::BittyWord(){
	setWord(0);
	
}
//-------------------------------
void BittyWord::setBit(uint8_t bitNo,bool newState){

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
	case 8:
		wb.bits.b8=newValue;
		break;
	case 9:
		wb.bits.b9=newValue;
		break;
	case 10:
		wb.bits.b10=newValue;
		break;
	case 11:
		wb.bits.b11=newValue;
		break;
	case 12:
		wb.bits.b12=newValue;
		break;
	case 13:
		wb.bits.b13=newValue;
		break;
	case 14:
		wb.bits.b14=newValue;
		break;
	case 15:
		wb.bits.b15=newValue;
		break;                  
	}

}
//-------------------------------
bool BittyWord::getBit(uint8_t bitNo){

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
	case 8:
		return wb.bits.b8;
	case 9:
		return wb.bits.b9;
	case 10:
		return wb.bits.b10;
	case 11:
		return wb.bits.b11;
	case 12:
		return wb.bits.b12;
	case 13:
		return wb.bits.b13;
	case 14:
		return wb.bits.b14;
	case 15:
		return wb.bits.b15;
	default:
		return NULL;
	}
}
//-------------------------------
bool BittyWord::toggleBit(uint8_t bitNo){
	setBit(bitNo,!getBit(bitNo));  
	return getBit(bitNo);     
}
//-------------------------------
uint16_t BittyWord::getWord(){
	return wb.word_;
}
//-------------------------------
void BittyWord::setWord(uint16_t value){
	wb.word_=value;
}      
//--------------------------------
void BittyWord::setLSB(uint8_t newLSB){
	setWord( (getWord() & 0xFF00)  |  newLSB);
}
//--------------------------------
uint8_t BittyWord::getLSB(){
	return wb.byte_[0];
}
//--------------------------------
void BittyWord::setMSB(uint8_t newMSB){
	uint16_t newMSB16=(uint16_t)newMSB;
	setWord(  (getWord() & 0x00FF)  |  (newMSB16<<8) );
}
//-------------------------------
uint8_t BittyWord::getMSB(){

	return wb.byte_[1];

}
//--------------------------------
void BittyWord::setByte(uint8_t byteNo, uint8_t newValue){
	
	wb.byte_[byteNo]=newValue;
	
}
//--------------------------------

uint8_t BittyWord::getByte(uint8_t byteNo){
	
	return wb.byte_[byteNo];

}
//--------------------------------

