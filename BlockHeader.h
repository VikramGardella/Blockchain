#ifndef BLOCKHEADER_H
#define BLOCKHEADER_H

class BlockHeader
{

public:
	//Constructors
	BlockHeader();
	BlockHeader(char par[64], char non[8]);
	BlockHeader(char par[64], char tim[8], char non[8]);

	//Accessors
	char* getParentHash();
	char* getTimeStamp();
	char* getNonce();

	//Mutators
	void setParentHash(char ph[8]);
	void setTimeStamp(char ts[8]);
	void setNonce(char no[8]);

private:
	char parentHash[64]; //32 bytes is 64 digits in hexidecimal
	char timeStamp[8]; //4 bytes is 8 digits in hexidecimal
	char nonce[8]; //4 bytes, 8 hex digits

};


#endif
