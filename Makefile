.targe: all clean
CC = gcc
CPP = g++
CFLAGS = -g -Wall 
SRCDIR = ./src
INCLUDEDIR = -I./include
PROGRAMS = BubbleSort_Demo \
		   InsertSort_Demo \
		   SelectSort_Demo \
		   ShellSort_Demo  \
		   MergeSort_Demo  \
		   QuickSort_Demo

all: $(PROGRAMS)

%: $(SRCDIR)/%.cpp
	$(CPP) $(CFLAGS) -o $@ $< $(INCLUDEDIR) $(LIBS)

clean:
	rm -rf $(PROGRAMS)
