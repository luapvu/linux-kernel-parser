#include "../headers/functions.h"

//Function to parse the large cpuinfo and meminfo files
//takes in the word to be parsed i.e model name, MemTotal etc as the wordToParse
//string input will be the fgets dump of the file read
std::string parser(std::string wordToParse, std::string input){
  //want to read in the first few characters and compare if it matches the word we are parsing
  int strSize = wordToParse.size();
  char compareStr[strSize];
  compareStr[strSize] = '\0';

//index is required when we start copying the kernal info , we only want to copy the kernal info and not the entire line
  int index = 0;
//creating the comparison word
  for(int i = 0; i < strSize; i++){
    compareStr[i] = input[i];
  }

  //determining if the line we are reading in has the info we are parsing for, if it does we copy all the characters AFTER this point
  if(compareStr == wordToParse){
    int outputSz = input.size() - strSize;
    char output[outputSz];
    output[outputSz] = '\0';

    for(int i = strSize; i < input.size(); i++){
      output[index] = input[i];
      index++;
    }
    return output;
  }
//if word is not found, we return an empty string
  return "";
}

