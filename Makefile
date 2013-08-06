.targe: all clean
CC = gcc
CPP = g++
CFLAGS = -g -Wall 
SRCDIR = ./src
INCLUDEDIR = -I./include
PROGRAMS = BubbleSort

all: $(PROGRAMS)

%: $(SRCDIR)/%.cpp
	$(CPP) $(CFLAGS) -o $@ $< $(INCLUDEDIR) $(LIBS)

clean:
	rm -rf $(PROGRAMS) *.DSYM
