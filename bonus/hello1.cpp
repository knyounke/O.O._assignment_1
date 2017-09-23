
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
	string name;

	cout <<"Enter your full name please: " << endl;
	getline(cin, name);

	cout << "Hello, " << name << "!" << endl;

	return 0;

}