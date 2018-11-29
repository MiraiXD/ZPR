#pragma once

#include<string>
#include "fileReader.h"
class Comparator
{
private:
	FileReader fR1, fR2;

	std::string line;
	void checkLCS(std::string&&, std::string&&);

public:
	void getLines(const std::string&);
	void compare();
	Comparator(const std::string&, const std::string&);
	~Comparator();
};

