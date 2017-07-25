# Bitty Structures Library

Bitty structures is a collection of utility classes for storing boolean values as bits in a byte(8 bits), word(16 bits) or double word(32 bits).
 
Convention for bits to boolean mappings is:
- `1` maps to `true`
- `0` maps to `false`

## BittyByte class

This class represents a set of 8 boolean values packed in a Byte.

```c
        BittyByte();
void    setBit(uint8_t bitNo,bool newState);
bool    getBit(uint8_t bitNo);
bool    toggleBit(uint8_t bitNo);              //returns new bit state
void    setByte(uint8_t newValue);
uint8_t getByte();
```

## BittyWord class

This class represents a set of 16 boolean values packed in a Word.

```c
        BittyWord();
void    setBit(uint8_t bitNo,bool newState);
bool    getBit(uint8_t bitNo);
bool    toggleBit(uint8_t bitNo);              //returns new bit state

void    setByte(uint8_t byteNo, uint8_t newValue);
uint8_t getByte(uint8_t byteNo);  

void    setWord(uint16_t value);
uint16_t getWord();

void    setLSB(uint8_t newLSB);
void    setMSB(uint8_t newMSB);
uint8_t getMSB();
uint8_t getLSB();
```

## BittyDWord class

This class represents a set of 32 boolean values packed in a Double Word.

```c
            BittyDWord();
void        setBit(uint8_t bitNo,bool newState);
bool        getBit(uint8_t bitNo);
bool        toggleBit(uint8_t bitNo);              //returns new bit state   

void        setByte(uint8_t byteNo, uint8_t newValue);
uint8_t     getByte(uint8_t byteNo);
	
void        setWord(uint8_t byteNo,uint16_t value);
uint16_t    getWord(uint8_t byteNo);

void        setDWord(uint32_t value);
uint32_t    getDWord();
```


