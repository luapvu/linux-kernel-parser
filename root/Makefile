#Variables
CC=g++
#CFLAGS=-c -Wall
CFLAGS= -c

#This target compiles all files necessary for running Assignment 1
all: compile

#Executes all object files created
#dependencies proc_parse.o, kernal.o, parser.o
#creates executable file proc_parse
compile: main.o Kernal.o parser.o
	$(CC) main.o Kernal.o parser.o -o proc_parse

#Left side: 3 target objects for my 3 source files
#Right side: Dependencies
#g++ -c = compile commands
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Kernal.o: ./src/Kernal.cpp
	$(CC) $(CFLAGS) ./src/Kernal.cpp

parser.o: ./src/parser.cpp
	$(CC) $(CFLAGS) ./src/parser.cpp

#Removes proc_parse executable file
clean:
	rm -rf *o proc_parse
