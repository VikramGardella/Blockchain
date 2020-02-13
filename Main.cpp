#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Node.h"
#include <ctime>
#include <iomanip>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]){

	//instantiating nodes
	Node A = Node("A", "101010");
	Node B = Node("B", "101010");
	Node C = Node("C", "101010");
	Node D = Node("D", "101010");
	Node E = Node("E", "101010");
	Node F = Node("F", "101010");

	//instantiating pointers to each node
	Node* toA = &A;
	Node* toB = &B;
	Node* toC = &C;
	Node* toD = &D;
	Node* toE = &E;
	Node* toF = &F;

	//for Node A:
	A.setAdjNodeOne(toB);
	A.setAdjNodeTwo(toC);
	A.setAdjNodeThree(toD);
	A.setAdjNodeFour(toE);
	A.setAdjNodeFive(toF);

	//for Node B:
	B.setAdjNodeOne(toA);
	B.setAdjNodeTwo(toC);
	B.setAdjNodeThree(toD);
	B.setAdjNodeFour(toE);
	B.setAdjNodeFive(toF);

	//for Node C:
	C.setAdjNodeOne(toA);
	C.setAdjNodeTwo(toB);
	C.setAdjNodeThree(toD);
	C.setAdjNodeFour(toE);
	C.setAdjNodeFive(toF);

	//for Node D:
	D.setAdjNodeOne(toA);
	D.setAdjNodeTwo(toB);
	D.setAdjNodeThree(toC);
	D.setAdjNodeFour(toE);
	D.setAdjNodeFive(toF);

	//for Node E:
	E.setAdjNodeOne(toA);
	E.setAdjNodeTwo(toB);
	E.setAdjNodeThree(toC);
	E.setAdjNodeFour(toD);
	E.setAdjNodeFive(toF);

	//for Node F:
	F.setAdjNodeOne(toA);
	F.setAdjNodeTwo(toB);
	F.setAdjNodeThree(toC);
	F.setAdjNodeFour(toD);
	F.setAdjNodeFive(toE);


	A.setDataCacheOut("101101");
	cout << "Before encryption: " << A.getDataCacheOut() << endl;
	A.Encrypt();
	cout << "After encryption: " << A.getDataCacheOutEn() << endl;
	A.setDataCacheIn(A.getDataCacheOutEn());
	cout << "Before decryption: " << A.getDataCacheIn() << endl;
	A.Decrypt();
	cout << "After decryption: " << A.getDataCacheInDe() << endl << endl << endl;


	cout << "Test: A transmitting to B the message: 001010" << endl;
	A.Transmit("001010", toB);
	cout << "the message after B received and decrypted is: " << B.getDataCacheInDe() << endl;

	time_t currT = time(0);
	stringstream stream;
	stream << hex << currT;

	cout << "time is: " << currT << endl;
	cout << asctime(localtime(&currT)) << endl;
	cout << "time in hex: " << stream.str() << endl;


	return 0;
}
