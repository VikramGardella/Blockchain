#ifndef TRANSACTIONLIST_H
#define TRANSACTIONLIST_H

#include <vector>
#include <cstdlib>
#include "Transaction.h"

class TransactionList
{

public:

//Constructor
TransactionList();

//Accessors
Transaction getTransactionAt(int index);

//Functions
void addTransaction(char ID[64], char from[64], char to[64]);

private:

std::vector<Transaction> ledger;


};

#endif
