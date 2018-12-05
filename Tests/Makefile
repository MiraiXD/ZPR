
all:
	g++ -c comparator.cpp
	g++ -c fileReader.cpp
	g++ -c Menu.cpp
	g++ -c pch.cpp
	g++ -c test.cpp -lboost_unit_test_framework-mt
	g++ -L/usr/local/lib -lboost_unit_test_framework comparator.o fileReader.o Menu.o pch.o test.o -o TEST
