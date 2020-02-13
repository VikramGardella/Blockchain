SOURCES = Main.cpp Node.cpp BlockHeader.cpp Block.cpp Transaction.cpp TransactionList.cpp
OBJECTS = Main.o Node.o BlockHeader.o Block.o Transaction.o TransactionList.o

blockchain: Main.cpp Node.cpp BlockHeader.cpp Block.cpp Transaction.cpp TransactionList.cpp
	g++ -o blockchain Main.cpp Node.cpp BlockHeader.cpp Block.cpp Transaction.cpp TransactionList.cpp

CXXFLAGS = -std=c++11 -D_GNU_SOURCE -Wall
