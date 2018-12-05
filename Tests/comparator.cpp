#include "pch.h"
#include "comparator.h"
#include <iostream>
#include <algorithm>





std::string Comparator::checkLCS(std::string&& s1, std::string&& s2)
{
	int i,j,m,n;
	int **L;
	m = s1.length();
	n = s2.length();
	std::string sLCS;

	// tworzymy dynamicznie tablicê L

	L = new int *[m + 1];
	for (i = 0; i <= m; i++) L[i] = new int[n + 1];

	// obliczamy tablicê L

	for (i = 0; i <= m; i++) L[i][0] = 0;
	for (j = 0; j <= n; j++) L[0][j] = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (s1[i] == s2[j])
				L[i + 1][j + 1] = 1 + L[i][j];
			else
				L[i + 1][j + 1] = std::max(L[i + 1][j], L[i][j + 1]);

	// wyznaczamy LCS

	sLCS = ""; i = m - 1; j = n - 1;
	while ((i >= 0) && (j >= 0))
		if (s1[i] == s2[j])
		{
			sLCS = s1[i] + sLCS;
			i--; j--;
		}
		else if (L[i + 1][j] > L[i][j + 1]) j--;
		else i--;	

    return sLCS;
}

void Comparator::getLines(const std::string& buf)
{
	int startPos = 0;
	int	endPos=0;
	int lineNum = 0;
	int shift=0;
	std::size_t found = buf.find_first_of('\n');
	int i = 0;
	while (found != std::string::npos)
	{
		
		startPos = endPos;
		endPos = found;
		found = buf.find_first_of('\n', found+1);
		
		
		
		line.assign(buf.substr((startPos + shift), (endPos - startPos + 1 - shift)));
		std::cout <<i<<"."<< line;
		//printf("%d.%s", (lineNum), buf.substr((startPos + shift), (endPos - startPos + 1 - shift)).c_str());

		i++;
		
		//std::cout << *lines[i];
		//shift start/end Pos for first line
		if (startPos == 0)
		{
			shift = 1;
		}
	}
	
}

std::string Comparator::compare()
{
    return checkLCS(fR1.getBuffor(), fR2.getBuffor());
	
}

Comparator::Comparator(const std::string &name1, const std::string &name2)
{
	fR1.setName(name1);
	fR2.setName(name2);	
}

std::string Comparator::getFR1Name()
{
	return fR1.getName();
}

std::string Comparator::getFR2Name()
{
	return fR2.getName();
}

Comparator::~Comparator()
{
}
