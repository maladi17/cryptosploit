#pragma once
#include <string>
#include <iostream>

class pattern {     // The class
public:           // Access specifier
	pattern() {     // Constructor
		std::cout << "pattern constructor " << std::endl;
	}

	~pattern() {     // destructor
		std::cout << "pattern destructor " << std::endl;
	}

	virtual void execute(std::string str, std::string word) { }
	virtual int outputBits() { return 0; };
	virtual void breakChances() {}


};

class encryption :public pattern {     // The class
public:      

	int numOfBits;
	// Access specifier
	encryption() {     // Constructor
		std::cout << "encryption constructor " << std::endl;
	}

	~encryption() {     // destructor
		std::cout << "encryption destructor " << std::endl;
	}

	virtual void execute(std::string str, std::string word) { }

	int outputBits() { return numOfBits;};
	virtual void breakChances() {}

};

class hash :public pattern {     // The class
public:           // Access specifier
	int numOfBits;
	hash(int num) {     // Constructor
		numOfBits = num;
		std::cout << "hash constructor " << std::endl;
	}

	~hash() {     // destructor
		std::cout << "hash destructor " << std::endl;
	}

	virtual void execute(std::string str, std::string word) { }

	int outputBits() { return numOfBits; }
	virtual void breakChances() { std::cout << "using the birthday attack it is possible to crack the hash in complexity of 2^"<< numOfBits/2 << std::endl; }
	

};




class md5 :public hash {     // The class
public:           // Access specifier
	md5();
	~md5();
	void execute(std::string str, std::string word); ////word is null
	void breakChances();
	

};

class vigenere :public encryption {     // The class
public:      
	

	vigenere();
	~vigenere();
	void execute(std::string str, std::string word);
	void breakChances();


};