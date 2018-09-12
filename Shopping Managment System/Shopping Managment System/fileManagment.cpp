#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

//ToDo
/*
Make a loading system for arrays and variables
Make a saving system for arrays and variables
Make a reciept saver
Make sure they are not stored in the same location
*/

bool isArrayFileOpen()
{
	bool produceArray{ false };
	std::ifstream verifyProduce("Produce.txt");
	if (verifyProduce.is_open())
	{
		produceArray = true;
		verifyProduce.close();
		std::cout << "Array file is open" << std::endl;
	}

	else
	{
		produceArray = false;
		std::cout << "Array file is closed" << std::endl;
	}

	return produceArray;
}

bool isReceiptFileOpen()
{
	bool receipts{ false };
	std::ifstream verifyReceiptsFile("noReceipts.txt");
	if (verifyReceiptsFile.is_open())
	{
		receipts = true;
		verifyReceiptsFile.close();
		std::cout << "Receipts File is open" << std::endl;
	}

	else
	{
		receipts = false;
		std::cout << "Receipts File is closed" << std::endl;
	}

	return receipts;

}


void fileCreation()
{

}