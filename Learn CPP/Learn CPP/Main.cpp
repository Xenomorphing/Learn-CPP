#include "pch.h"
#include <iostream>
#include <string>


int main()
{
	std::string myString = "Hello World!";
	std::cout << myString;
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
}