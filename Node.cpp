#include "Node.h"

//Constructors
Node::Node(std::string iden, std::string eKey, Node& N1, Node& N2, Node& N3, Node& N4, Node& N5){
	ID = iden;
	encryptionKey = eKey;
	adjNodeOne = &N1;
	adjNodeTwo = &N2;
	adjNodeThree = &N3;
	adjNodeFour = &N4;
	adjNodeFive = &N5;
}


Node::Node(std::string iden, std::string eKey){
	ID = iden;
	encryptionKey = eKey;
}


//Accessors
std::string Node::getEncryptionKey(){return encryptionKey;}
Node* Node::getAdjNodeOne(){return adjNodeOne;}
Node* Node::getAdjNodeTwo(){return adjNodeTwo;}
Node* Node::getAdjNodeThree(){return adjNodeThree;}
Node* Node::getAdjNodeFour(){return adjNodeFour;}
Node* Node::getAdjNodeFive(){return adjNodeFive;}
std::string Node::getID(){return ID;}
std::string Node::getDataCacheOut(){return dataCacheOut;}
std::string Node::getDataCacheOutEn(){return dataCacheOutEn;}
std::string Node::getDataCacheIn(){return dataCacheIn;}
std::string Node::getDataCacheInDe(){return dataCacheInDe;}

//Mutators
void Node::setEncryptionKey(std::string newKey){encryptionKey = newKey;}

void Node::setAdjNodeOne(Node* One){adjNodeOne = One;}

void Node::setAdjNodeTwo(Node* Two){adjNodeTwo = Two;}

void Node::setAdjNodeThree(Node* Three){adjNodeThree = Three;}

void Node::setAdjNodeFour(Node* Four){adjNodeFour = Four;}

void Node::setAdjNodeFive(Node* Five){adjNodeFive = Five;}

void Node::setID(std::string newID){ID = newID;}

void Node::setDataCacheOut(std::string bin){dataCacheOut = bin;}

void Node::setDataCacheIn(std::string bin){dataCacheIn = bin;}

//Functions

void Node::Encrypt(){//simple XOR binary encryption
	//dataCacheOutEn = whatever it is after encryption process
	dataCacheOutEn = "XXXXXX";
	if(dataCacheOut.length() == encryptionKey.length())
		for(int i=0; i<encryptionKey.length(); i++){
			if(dataCacheOut[i]==encryptionKey[i])
				dataCacheOutEn[i] = '0';
			else
				dataCacheOutEn[i] = '1';
		}
//	else
//		cout << "Error, desired data out is different length from the encryption key." << endl;
}

void Node::Decrypt(){
	//dataCacheInDe = whatever dataCacheIn is after decryption process
	dataCacheInDe = "XXXXXX";
	if(dataCacheIn.length() == encryptionKey.length())
		for(int i=0; i<encryptionKey.length(); i++){
			if(dataCacheIn[i]==encryptionKey[i])
				dataCacheInDe[i] = '0';
			else
				dataCacheInDe[i] = '1';
		}
//	else
//		cout << "Error, incoming data is different length from the encryption key." << endl;
}

void Node::Transmit(std::string mes, Node* Receiver){
	//this' dataCacheOut = encrypt();
	this->dataCacheOut = mes;
	this->Encrypt();
	Receiver->setDataCacheIn(this->getDataCacheOutEn());
	Receiver->Decrypt();
	//set recipient Node's dataCacheIn to this' dataCacheOut after encrypting

}

void Node::Hash(){

}
