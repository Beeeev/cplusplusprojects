//Levi Bevins, CIT150, Ch6-Lab1

#include <iostream>
using namespace std;

//declare function
double larger(double x, double y);

int main()
{
	//variables
	double num;
	double max;
	int count;

	//Output and user input
	cout << "Enter 10 numbers." << endl;
	cin >> num;
	max = num;

	//check for largest number by calling larger function
	for (count = 1; count < 10; count++)
	{
		cin >> num;
		max = larger(max, num);
	}
	cout << "The largest number is " << max << endl;

} 

//function to check numbers
double larger(double x, double y)
{
	if (x >= y)
		return x;
	else
		return y;
}