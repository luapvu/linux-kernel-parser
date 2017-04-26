
Steps to compile:
1. Open up terminal and navigate to the /root directory of the assignment.
2. Type "make" to execute the make file and create object files.
3. The Makefile will compile the main.cpp along with the kernal.cpp and parser.cpp.
	3.1 The Kernal.cpp is a class file for a kernal class which is used in main.cpp
	3.2 The parser.cpp is a parsing function which is called within main.cpp to parse kernal information
4. As specified the executable has been named "proc_parse", to run it type "./proc_parse"
5. To clean the root of all object files and proc_parse executable type "make clean" 


Tests conducted:

These steps were tested on a linux machine within CSIL at the desktop in cubicle 9838.2 in the main lab. These were the results:


pvu@ASB9820u-B02:~$ cd Desktop
pvu@ASB9820u-B02:~/Desktop$ cd Assignment1/
pvu@ASB9820u-B02:~/Desktop/Assignment1$ cd root/
pvu@ASB9820u-B02:~/Desktop/Assignment1/root$ make
g++ -c main.cpp
g++ -c ./src/Kernal.cpp
g++ -c ./src/parser.cpp
g++ main.o Kernal.o parser.o -o proc_parse
pvu@ASB9820u-B02:~/Desktop/Assignment1/root$ ./proc_parse
----------------------------------------------
Your kernal information will be printed below:
----------------------------------------------
CPU Model Name:           Intel(R) Core(TM) i7-3770 CPU @ 3.40GHz
Kernal Version:           Linux version 3.13.0-106-generic (buildd@lcy01-30) (gcc version 4.8.4 (Ubuntu 4.8.4-2ubuntu1~14.04.3) ) #153-Ubuntu SMP Tue Dec 6 15:44:32 UTC 2016
Main Memory Total:        16348640 kB
Uptime:                   981699.83  Seconds
----------------------------------------------
pvu@ASB9820u-B02:~/Desktop/Assignment1/root$ 


