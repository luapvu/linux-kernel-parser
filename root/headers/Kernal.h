#ifndef KERNAL_H
#define KERNAL_H

//Class to hold /proc info which will be printed out
//contains constructor, destructor. This class has member functions that allow users to set the CPU, Version, Memory
//and uptime, and has a member function to print all of these informations to the console.
class Kernal
{
	public:
	  Kernal();
	  ~Kernal();


	  void setCPU(std::string);
	  void setVersion(std::string);
	  void setMemory(std::string);
	  void setUptime(std::string);
	  void printInfo();
	private:
	  std::string cpu;
	  std::string version;
	  std::string memory;
	  std::string uptime;
};


#endif
