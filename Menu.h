#pragma once
#include <string>
#include <iostream>
#include "comparator.h"

class Menu
{
private:
	std::string input;
	Comparator *cmp;

public:
	void printMenu();
	void runMenu();
	Menu();
	~Menu();
};

