#include "pch.h"
#include "Menu.h"

using namespace std;

void Menu::printMenu()
{
	string name1, name2;
	cout << "Podaj nazwe plikow do porownania: np. \"plik1.txt plik2.txt\"" << endl;
	cin >> name1 >> name2;
	cmp = new Comparator(name1,name2);

}

void Menu::runMenu()
{
	while (1)
	{
		if (true) 
		{
			cmp->compare();
		}

	 return;
	}
}


Menu::Menu()
{
	printMenu();
	runMenu();
}


Menu::~Menu()
{
}
