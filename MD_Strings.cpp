// MD_Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <istream>
using namespace std;

void reverse(string&);
void putInMiddle(string, string&);

int main()
{
	string name;
	string rand;

	cout << "Enter your name:\n";
	cin.get(name, name.length()-1);
	cout << "\n" << name;

	//cout << 

}

