#include "BlockHeader.h"
#include <sstream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string.h>
#include <cstring>

//Constructors
BlockHeader::BlockHeader(){
	time_t curr = time(0);
	std::stringstream ss;
	ss << std::hex << curr;
	std::string res = ss.str();
	strcpy(timeStamp, res.c_str());
}

BlockHeader::BlockHeader(char par[64], char non[8]){
	strcpy(parentHash, par);
	strcpy(nonce, non);
	time_t curr = time(0);
	std::stringstream ss;
	ss << std::hex << curr;
	std::string res = ss.str();
	strcpy(timeStamp, res.c_str());
}

BlockHeader::BlockHeader(char par[64], char tim[8], char non[8]){
	strcpy(parentHash, par);
	strcpy(timeStamp, tim);
	strcpy(nonce, non);
}

//Accessors
char* BlockHeader::getParentHash(){return parentHash;}

char* BlockHeader::getTimeStamp(){return timeStamp;}

char* BlockHeader::getNonce(){return nonce;}


//Mutators
void BlockHeader::setParentHash(char ps[64]){strcpy(parentHash, ps);}

void BlockHeader::setTimeStamp(char ts[8]){strcpy(timeStamp, ts);}

void BlockHeader::setNonce(char no[8]){strcpy(nonce, no);}


