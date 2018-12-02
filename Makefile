all:
	g++ -c comparator.cpp
	g++ -c fileReader.cpp
	g++ -c Menu.cpp
	g++ -c pch.cpp
	g++ -c test.cpp -lboost_unit_test_framework-mt
	g++ comparator.o fileReader.o Menu.o pch.o test.o -o TEST
