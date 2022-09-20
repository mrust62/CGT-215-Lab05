// CGT 215 Lab05.cpp : 
// This file contains the 'main' function. 
// Program execution begins and ends there.
// Written by Matthew Rust 9/20/2022

#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main()
{
	string text;
	int lineLength;

	cout << "enter a line: ";
	getline(cin, text);

	lineLength = size(text);
	cout << lineLength << endl;

	for (int j = 0; j < lineLength; j++)
	{
		if (text[j] >= 65 && text[j] <= 90) //checks if letter is upper case
		{
			cout << 'U' << endl;
		}
		else if (text[j] >= 97 && text[j] <= 122) // checks if letter is lower case
		{
			cout << "L" << endl;
		}
		else // if it is a number or special character
		{
			cout << "S" << endl;
		}
	}
}


