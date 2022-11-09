// Levi Bevins, CIT 150, Ch6 Lab 2

#include <iostream>
using namespace std;

//userinput variables
double userTemp;
int userChoice;

//functions for calculations
void CelsiusToFahrenheit(double userTemp)
{
    double newTemp = (userTemp * 1.8) + 32;
    cout << userTemp << " coverted to Fahrenheit is " << newTemp;
}

void FahrenheitToCelsius(double userTemp)
{
    double newTemp = (userTemp - 32) * .556;
    cout << userTemp << " coverted to Celsius is " << newTemp;
}


int main()
{
    //print prompts for user and stores answers
    cout << "Enter temperature to convert:" << endl;
    cin >> userTemp;
    cout << "Enter 1 to convert Fahrenheit To Celsius or 2 to Celsius To Fahrenheit" << endl;
    cin >> userChoice;

    //decides which function is needed for proper calculation
    if (userChoice == 1)
    {
        FahrenheitToCelsius(userTemp);
    }
    else
    {
        CelsiusToFahrenheit(userTemp);
    }
}


