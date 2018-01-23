// Anagram-Creator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

std::vector<std::string> readDictionary(std::string fileLocation);

int main()
{
std::vector<std::string> dictionary = readDictionary("Dictionary.txt");
std::string lastWord = dictionary.back();
std::cout << dictionary.at(0) << ", " << lastWord;
std::string wordToAnalyse;
std::cout << "Enter Letters to Analyse.";
std::cin >> wordToAnalyse;


    return 0;
}


std::vector<std::string> readDictionary(std::string fileLocation) {
	std::vector<std::string> dictionary;
	std::ifstream file(fileLocation);
	std::string word;
	while (file >> word) {
		dictionary.push_back(word);
	}
	return dictionary;
}
