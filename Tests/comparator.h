#pragma once

#include<string>
#include "fileReader.h"
class Comparator
{
private:
	FileReader fR1, fR2;

	std::string line;
    std::string checkLCS(std::string&&, std::string&&);

public:
	void getLines(const std::string&);
    std::string compare();
	Comparator(const std::string&, const std::string&);
	std::string getFR1Name();
	std::string getFR2Name();
	~Comparator();
};

