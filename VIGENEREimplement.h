#pragma once
#include <string>
#include <iostream>


std::string originalText(std::string cipher_text, std::string key);
std::string cipherText(std::string str, std::string key);
std::string generateKey(std::string str, std::string key);
std::string probe(std::string str);