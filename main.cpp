#include <algorithm>
#include <string>
#include <iostream>
#include "cryptoObj.h"

char* getCmdOption(char ** begin, char ** end, const std::string & option)
{
	char ** itr = std::find(begin, end, option);
	if (itr != end && ++itr != end)
	{
		return *itr;
	}
	return 0;
}

bool cmdOptionExists(char** begin, char** end, const std::string& option)
{
	return std::find(begin, end, option) != end;
}



int main(int argc, char * argv[])
{
	if (cmdOptionExists(argv, argv + argc, "-h") && getCmdOption(argv, argv + argc, "-h")==0)
	{
		std::cout << "got -h" << std::endl;
		
	}

	char * encryption = getCmdOption(argv, argv + argc, "-enc");

	if (encryption)
	{
		pattern* ptr = NULL;
		std::cout << "got param " << encryption << std::endl;
		if (!strcmp(encryption, "vigenere"))
			ptr = new vigenere();
		else
			return 0;
		ptr->execute("crack", "LXFOPVEFRNHR");
	}

	char * hash = getCmdOption(argv, argv + argc, "-hash");

	if (hash)
	{
		pattern* ptr = NULL;
		std::cout << "got param " << hash << std::endl;
		if (!strcmp(hash, "md5"))
			ptr = new md5();
		else
			return 0;
		ptr->execute("hello", NULL);
		std::cout<< ptr->outputBits() <<std::endl;
		ptr->breakChances();
	}



	return 0;
}