#include "pch.h"
#include "fileReader.h"

/**
* Load file to buddor
*/
void FileReader::loadBuffor(void)
{
	std::string temp;
	file.open(file_name);
	if (file.is_open())
	{
		
		file.seekg(0, file.end);
		double length = static_cast<double>(file.tellg());
		file.seekg(0, file.beg);
		//printf("FILE SIZE: %.0f Bajtow\n", length);
		//printf("FILE SIZE: %f MB\n", length/(1024*1024));
		buffor.reserve(static_cast<int>(ceil(length)));
		while (getline(file, temp))
		{
			buffor += (temp+'\n');
		}
		file.close();
	}
	else
	{
		perror("blad odczytu\n");
	}

	
}

FileReader::FileReader()
{
}

FileReader::FileReader(const std::string& file_name) :file_name(file_name)
{
	loadBuffor();
}

void FileReader::printBuffor(void) const
{
	std::cout << buffor << std::endl;
}

std::string FileReader::getBuffor() const
{
	return buffor;
}


void FileReader::setName(const std::string& file_name)
{
	this->file_name = file_name;
	loadBuffor();

}

std::string FileReader::getName()
{
	return file_name;
}

FileReader::~FileReader()
{
}
