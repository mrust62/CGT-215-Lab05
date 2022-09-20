// CGT 215 Lab05.cpp : 
// This file contains the 'main' function. 
// Program execution begins and ends there.
// Written by Matthew Rust 9/20/2022

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void cypherConversion(string text)
{
	int lineLength;
	int cypherLocation;
	char toUpperCase;
	vector<char> cypher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

	lineLength = size(text); 

	for (int j = 0; j < lineLength; j++)
	{
		if (text[j] >= 65 && text[j] <= 90) //checks if letter is upper case
		{
			cypherLocation = text[j] - 65; // lowers number to match with the cypher vector
			cout << cypher[cypherLocation]; // converts letter based on the cypher
		}
		else if (text[j] >= 97 && text[j] <= 122) // checks if letter is lower case
		{
			toUpperCase = text[j] - 32; // sets lower case to upper case
			cypherLocation = toUpperCase - 65;//matches to cypher
			toUpperCase = cypher[cypherLocation] + 32; // back to lower case
			cout << toUpperCase; // displays new letter
		}
		else // if it is a number or special character
		{
			cout << text[j];
		}
	}
}

int main()
{
	string sentence;

	cout << "enter a line: ";
	getline(cin, sentence);

	cypherConversion(sentence);
}


