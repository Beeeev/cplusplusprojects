// Levi Bevins CIT 150 Ch7 Lab 2

#include <iostream>
#include <string>

using namespace std;
//prototype
string convertToX(string inp);


int main()
{
	//displays info, captures user input and converts user input through function
	string studentInfo;
	cout << "Enter the ss#, UserID and password, separated by spaces" << endl;
	cout << "For example 123-45-6789 UserID password" << endl;
	getline(cin, studentInfo);
	convertToX(studentInfo);
	
}


string convertToX(string inp)
{
	//replaces SSN with x's
	inp.replace(0, 11, "xxx-xx-xxxx");
	//gets beginning of password start and size
	int pwStart = inp.find_last_of(" ") + 1;
	int pwSize = inp.size() - pwStart;
	//stores the password as string
	string pw = inp.substr(pwStart, pwSize);

	//replaces each character with x's until end of string
	for (int i = 0; i < pwSize; i++)
	{
		pw.erase(i, 1);
		pw.insert(i, "X");
	}
	
	//replace original copy of info with masked password
	inp.replace(pwStart, pwSize, pw);
	cout << inp;

	return inp;
}