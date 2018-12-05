//#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/included/unit_test.hpp>
#include "pch.h"
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "fileReader.h"
#include "comparator.h"
#include "Menu.h"


using namespace std;
using namespace boost::unit_test;

BOOST_AUTO_TEST_SUITE( fileReader)
BOOST_AUTO_TEST_CASE( testFileReader)
{
  std::string name1 = "file.txt";
  std::string name2 = "file2.txt";
  Comparator *cmp = new Comparator(name1, name2);
  BOOST_CHECK( cmp->getFR1Name() == name1 && cmp->getFR2Name() == name2 );
}
BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE( LCS)
BOOST_AUTO_TEST_CASE( testLCS)
{
	string name1, name2;
	cout << "Podaj nazwe plikow do porownania: np. \"plik1.txt plik2.txt\"" << endl;
	cin >> name1 >> name2;
	Comparator *cmp = new Comparator(name1,name2);
	std::string lcs = cmp->compare();
	BOOST_CHECK(lcs.compare("123456"));
}
BOOST_AUTO_TEST_SUITE_END()




