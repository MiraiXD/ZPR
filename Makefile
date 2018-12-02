SHELL = /bin/bash

OBJECTS = Menu.o fileReader.o comparator.o test.o

OBJDIR = ./

CFLAGS = -Wall

LDFLAGS = -L/usr/local/boost_1_67_0 -lm -lboost_regex

cpu : $(addprefix $(OBJDIR)/, $(OBJECTS) $(CPUOBJS))
	g++ $(CFLAGS) -o ZPR $^ $(LDFLAGS)

$(OBJDIR)/%.o : %.cpp
	g++ $(CFLAGS) $(IOPTS) -c $< -o $@

clean : 
	rm obj/*.o $(PROG)