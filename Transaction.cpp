#include "Transaction.h"
#include <sstream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string.h>
#include <cstring>

//Constructor
Transaction::Transaction(char ID[64], char from[64], char to[64]){
	strcpy(hashID, ID);
	strcpy(fromWalletAdd, from);
	strcpy(toWalletAdd, to);
	time_t curr = time(0);
	std::stringstream ss;
	ss << std::hex << curr;
	std::string res = ss.str();
	strcpy(timeStamp, res.c_str());

}

//Accessors
char* Transaction::getHashID(){return hashID;}

char* Transaction::getFromWalletAdd(){return fromWalletAdd;}

char* Transaction::getToWalletAdd(){return toWalletAdd;}

char* Transaction::getTime(){return timeStamp;}




