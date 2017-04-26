
#include <iostream>
#include <string.h>
#include "../headers/Kernal.h"


using namespace std;

Kernal::Kernal()
{
cpu = "";
version = "";
memory = "";
uptime = "";

}

Kernal::~Kernal()
{
}


// Member functions used to set kernal informations 
void Kernal:: setCPU(string kernalCPU)
{
	cpu = kernalCPU;

}

void Kernal:: setVersion(string kernalVersion)
{
	version = kernalVersion;

}

void Kernal:: setMemory(string kernalMemory)
{
	memory = kernalMemory;

}

void Kernal:: setUptime(string kernalUptime)
{
	uptime = kernalUptime;

}

void Kernal:: printInfo()
{
	cout << "----------------------------------------------" << endl;
	cout << "Your kernal information will be printed below:" << endl;
	cout << "----------------------------------------------" << endl;
	cout << cpu;
	cout << version;
	cout << memory;
	cout << uptime;
	cout << "" << endl;
	cout << "----------------------------------------------" << endl;
}

