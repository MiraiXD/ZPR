//#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/unit_test.hpp>
/*#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "fileReader.h"
#include "comparator.h"
#include "Menu.h"
*/

using namespace std;
using namespace boost::unit_test;

int dodaj( int i, int j)
{
	return i+j;
}
/*
int testFun()
{
	string name1, name2;
	cout << "Podaj nazwe plikow do porownania: np. \"plik1.txt plik2.txt\"" << endl;
	cin >> name1 >> name2;
	//Comparator *cmp = new Comparator(name1,name2);
	Menu menu;
	return 1;
}*/

BOOST_AUTO_TEST_CASE( testDodajxX)
{
//	Menu menu;
	BOOST_CHECK( dodaj(0,1) == 1 );
}



