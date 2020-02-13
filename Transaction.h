#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction
{

public:
	//Constructors
	Transaction(char ID[64], char from[64], char to[64]);

	//Accessors
	char* getHashID();
	char* getFromWalletAdd();
	char* getToWalletAdd();
	char* getTime();


private:
	char hashID[64];
	char fromWalletAdd[64];
	char toWalletAdd[64];
	char timeStamp[8];

};

#endif
