#include "BittyDWord.h"


BittyDWord::BittyDWord(){
	setDWord(0);
	
}
//-------------------------------
void BittyDWord::setBit(uint8_t bitNo,bool newState){

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
	case 16:
		wb.bits.b16=newValue;
		break;
	case 17:
		wb.bits.b17=newValue;
		break;
	case 18:
		wb.bits.b18=newValue;
		break;
	case 19:
		wb.bits.b19=newValue;
		break;
	case 20:
		wb.bits.b20=newValue;
		break;
	case 21:
		wb.bits.b21=newValue;
		break;
	case 22:
		wb.bits.b22=newValue;
		break;
	case 23:
		wb.bits.b23=newValue;
		break;                  
	case 24:
		wb.bits.b24=newValue;
		break;
	case 25:
		wb.bits.b25=newValue;
		break;
	case 26:
		wb.bits.b26=newValue;
		break;
	case 27:
		wb.bits.b27=newValue;
		break;
	case 28:
		wb.bits.b28=newValue;
		break;
	case 29:
		wb.bits.b29=newValue;
		break;
	case 30:
		wb.bits.b30=newValue;
		break;
	case 31:
		wb.bits.b31=newValue;
		break;  
	}

}
//-------------------------------
bool BittyDWord::getBit(uint8_t bitNo){

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
	case 16:
		return wb.bits.b16;
	case 17:
		return wb.bits.b17;
	case 18:
		return wb.bits.b18;
	case 19:
		return wb.bits.b19;
	case 20:
		return wb.bits.b20;
	case 21:
		return wb.bits.b21;
	case 22:
		return wb.bits.b22;
	case 23:
		return wb.bits.b23;
	case 24:
		return wb.bits.b24;
	case 25:
		return wb.bits.b25;
	case 26:
		return wb.bits.b26;
	case 27:
		return wb.bits.b27;
	case 28:
		return wb.bits.b28;
	case 29:
		return wb.bits.b29;
	case 30:
		return wb.bits.b30;
	case 31:
		return wb.bits.b31;
	default:
		return NULL;
	}
	
}
//-------------------------------
bool BittyDWord::toggleBit(uint8_t bitNo){
	setBit(bitNo,!getBit(bitNo));  
	return getBit(bitNo);     

}
//-------------------------------
uint32_t BittyDWord::getDWord(){
	
	return wb.dword_;

}
//-------------------------------
void BittyDWord::setDWord(uint32_t value){
	wb.dword_=value;
}      
//--------------------------------
void BittyDWord::setByte(uint8_t byteNo, uint8_t newValue){
	
	wb.byte_[byteNo]=newValue;
	
}
//--------------------------------

uint8_t BittyDWord::getByte(uint8_t byteNo){
	
	return wb.byte_[byteNo];

}
//--------------------------------

