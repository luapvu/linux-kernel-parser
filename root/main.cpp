//Created January 10th 2017 by Paul Vu 301169550 pvu@sfu.ca
//This file will print out Kernal information on a linux machine via the /proc file
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "./headers/Kernal.h"
#include "./headers/functions.h"

using namespace std;


//Main function
int main(){
//creating ain instance of my class as a kernal object which will be printed out
Kernal myKernal;
string myCPU;
string myVersion;
string myMemory;
string myUptime;

//utilizing fgets function to read in proc file, we then call my parsing function since the file is lengthy
FILE * cpuFILE;
char cpuKernal[2000];
cpuFILE = fopen("/proc/cpuinfo", "r");
while(fgets(cpuKernal, sizeof(cpuKernal), cpuFILE))
{
  string result = parser("model name	:", cpuKernal);
  if(result != ""){
    myCPU = "CPU Model Name:          ";
    myCPU += result;
    myKernal.setCPU(myCPU);

  }
}



//No need to call parsing function simply read in and copy the information as /proc/version only contains version info
FILE * kernalFILE;
char versionKernal[2000];
kernalFILE = fopen("/proc/version", "r");
while(fgets(versionKernal, sizeof(versionKernal), kernalFILE))
{
  myVersion = "Kernal Version:           ";
  myVersion += versionKernal;
  myKernal.setVersion(myVersion);
}

//utilizing fgets function to read in proc file, we then call my parsing function since the file is lengthy
FILE * memFILE;
char memKernal[2000];
memFILE = fopen("/proc/meminfo", "r");
while(fgets(memKernal, sizeof(memKernal), memFILE))
{
  string result = parser("MemTotal:", memKernal);
  if(result != ""){
    myMemory = "Main Memory Total: ";
    myMemory += result;
    myKernal.setMemory(myMemory);
  }
}

//Uptime, we want the first number which holds the uptime while we ignore the second number as it holds the amount of time in idle
//http://www.linuxquestions.org/questions/linux-general-1/2-numbers-in-proc-uptime-217046/
FILE * uptimeFile;
uptimeFile = fopen("/proc/uptime", "r");
char uptime[2000];


while(fgets(uptime, sizeof(uptime), uptimeFile))
{
  char uptimeString[sizeof(uptime)];
  for(int i = 0; i < sizeof(uptime); i++){
    uptimeString[i] = uptime[i];

    if(uptime[i] == ' '){
      i = sizeof(uptime);
      myUptime = "Uptime:                   ";
      myUptime += uptimeString;
      myUptime += "Seconds";
      myKernal.setUptime(myUptime);
    }
  }


}

//we are now done, so close all the files
  fclose(cpuFILE);
  fclose(kernalFILE);
  fclose(memFILE);
  fclose(uptimeFile);

//print to console.
myKernal.printInfo();



return 0;

}
