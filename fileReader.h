#pragma once

#include <fstream>
#include <iostream>
#include <string> 
#include <cmath>

class FileReader
{
private:
	std::fstream file;
	std::string file_name;
	std::string buffor;
	void loadBuffor(void);


public:
	FileReader();
	FileReader(const std::string& file_name);
	void printBuffor (void)const;
	std::string getBuffor() const;
	void setName (const std::string& file_name);
	~FileReader();
};

