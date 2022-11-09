// iStreamBevins.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a = 6.618616846; 
	int number = 245;
	string name = "Levi";

	setprecision(2);
	cout << a << endl;
	cout << setw(10) << number << endl;
	cout << setfill('#');
	cout << setw(10) << name << endl;

	//cout << setfill("*");
}

