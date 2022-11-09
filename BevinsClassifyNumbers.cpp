//Levi Bevins, CIT150, Ch-6 Lab2

#include <iostream>
#include <iomanip>

using namespace std;

const int N = 20;
//Functions
void initialize(int& zeroCount, int& oddCount, int& evenCount);
void getNumber(int& num);
void classifyNumber(int num, int& zeroCount, int& oddCount,
	int& evenCount);
void printResults(int zeroCount, int oddCount, int evenCount);

int main()
{
	//variables
	int counter;
	int number; 
	int zeros;
	int odds; 
	int evens; 

	//input
	initialize(zeros, odds, evens); 
	cout << "Please enter " << N << " integers."
		<< endl; 
	cout << "The numbers you entered are: " << endl;

	//loop for checkings numbers
	for (counter = 1; counter <= N; counter++) 
	{
		getNumber(number); 
		cout << number << " "; 
		classifyNumber(number, zeros, odds, evens); 
	}
	cout << endl;
	printResults(zeros, odds, evens);
}

//intialize function
void initialize(int& zeroCount, int& oddCount, int& evenCount)
{
	zeroCount = 0;
	oddCount = 0;
	evenCount = 0;
}
//input number function
void getNumber(int& num)
{
	cin >> num;
}
//checking number function
void classifyNumber(int num, int& zeroCount, int& oddCount,
	int& evenCount)
{
	switch (num % 2)
	{
	case 0:
		evenCount++;
		if (num == 0)
			zeroCount++;
		break;
	case 1:
	case -1:
		oddCount++;
	}
} 

//print function
void printResults(int zeroCount, int oddCount, int evenCount)
{
	cout << "There are " << evenCount << " evens, "
		<< "which includes " << zeroCount << " zeros"
		<< endl;
	cout << "The number of odd numbers is: " << oddCount
		<< endl;
}
