#include "cryptoObj.h"
#include "VIGENEREimplement.h"


vigenere::vigenere()  {     // Constructor
	std::cout << "vigenere constructor " << std::endl;
}

vigenere::~vigenere() {     // destructor
	std::cout << "vigenere destructor " << std::endl;
}

void vigenere::execute(std::string str, std::string word) {

	if (str.compare(0,7,"enckey-") == 0) {  // enckey-key
		std::string key = str.substr(7);
		std::cout << "vigenere enc executed with key " << key << std::endl; 
		std::string keyV = generateKey("word", key);
		std::string cipher_text = cipherText("word", keyV);
		std::cout << "vigenere enc val is " << cipher_text << std::endl;

	}

	else if (str.compare(0, 7, "deckey-") == 0) {  // deckey-key
		std::string key = str.substr(7);
		std::cout << "vigenere dec executed with key " << key << std::endl;
		std::string keyV = generateKey(word, key);
		std::string plain_text = originalText(word, keyV);
		std::cout << "vigenere dec val is " << plain_text << std::endl;
	}

	else if (str.compare("crack") == 0) {  // crack
		
		
		std::cout << "vigenere crack val is " << probe(word) << std::endl;
	}

}


void vigenere::breakChances() {
	encryption::breakChances();
	std::cout << "this is vigenere breakChances." << std::endl;

};




