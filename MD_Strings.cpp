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
	getline(cin, name);
	cout << "\n";

	cout << "Enter any number of random characters:\n";
	getline(cin, rand);
	cout << "\n";

	reverse(rand);
	putInMiddle(rand, name);

	cout << "\n" << name << "\n\n";

}

void reverse(string& rand) {
	string temp = rand;
	for (int i = 0; i < rand.length()/2; i++) {
		rand[i] = temp[rand.length() - i - 1];
		rand[rand.length() - i - 1] = temp[i];
	}
}

void putInMiddle(string reversedRand, string& name) {
	string str1 = reversedRand.substr(0, reversedRand.length() / 2);
	string str2 = reversedRand.substr(reversedRand.length() / 2, reversedRand.length() - 1);

	name = str1 + " " + name + " " + str2;
}

