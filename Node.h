#ifndef NODE_H
#define NODE_H
#include <vector>
#include <string>
#include <iostream>

class Node
{

public:
	//Constructors
	Node(std::string iden, std::string eKey, Node& N1, Node& N2, Node& N3, Node& N4, Node& N5);
	Node(std::string iden, std::string eKey);

	//Accessors
	std::string getEncryptionKey();
	Node* getAdjNodeOne();
	Node* getAdjNodeTwo();
	Node* getAdjNodeThree();
	Node* getAdjNodeFour();
	Node* getAdjNodeFive();
	std::string getID();
	std::string getDataCacheOut();
	std::string getDataCacheOutEn();
	std::string getDataCacheIn();
	std::string getDataCacheInDe();


	//Mutators
	void setEncryptionKey(std::string newKey);
	void setAdjNodeOne(Node* One);
	void setAdjNodeTwo(Node* Two);
	void setAdjNodeThree(Node* Three);
	void setAdjNodeFour(Node* Four);
	void setAdjNodeFive(Node* Five);
	void setID(std::string newID);
	void setDataCacheOut(std::string bin);
	void setDataCacheIn(std::string bin);

	//Functions
	void Encrypt();
	void Decrypt();
	void Transmit(std::string mes, Node* Receiver);
	void Hash();

private:
	//ID
	std::string ID;

	//pointers to other Nodes
	Node * adjNodeOne;
	Node * adjNodeTwo;
	Node * adjNodeThree;
	Node * adjNodeFour;
	Node * adjNodeFive;

	std::string encryptionKey;
	std::string dataCacheIn;//data coming in pre-decryption
	std::string dataCacheInDe;//data coming in post-decryption
	std::string dataCacheOut;//data going out pre-encryption
	std::string dataCacheOutEn;//data going out post-encryption
//	vector ledger;
	std::vector<std::string> ledger;
};

#endif
