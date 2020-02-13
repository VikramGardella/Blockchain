#include "TransactionList.h"
#include "Transaction.h"

//Constructor
TransactionList::TransactionList(){

}

//Accessor
Transaction TransactionList::getTransactionAt(int index){
	return ledger[index];
}

//Functions
void TransactionList::addTransaction(char ID[64], char from[64], char to[64]){
	Transaction add = Transaction(ID, from, to);
	ledger.push_back(add);
}


