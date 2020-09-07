#include "cryptoObj.h"
#include "MD5implement.h"
          
md5:: md5():hash(128) {     // Constructor
		std::cout << "md5 constructor " << std::endl;
	}

md5::~md5() {     // destructor
		std::cout << "md5 destructor " << std::endl;
	}

void md5::execute(std::string str, std::string word) { //word is null

	if (str.compare("hash") == 0) { std::cout << "md5 executed " << md5hash("grape") << std::endl; } 

}
	

	void md5::breakChances() { 
		hash::breakChances();
		std::cout << "this is md5 breakChances." << std::endl; 
	};


	

