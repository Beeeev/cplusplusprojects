// Levi Bevins, Lab 1, Convert Length project

#include <iostream>
using namespace std;

//constants
const double centimeters_Per_Inch = 2.54;
const int inches_Per_Foot = 12;

int main()
{
    //declared varibles
    int feet; 
    int inches; 
    int totalInches; 
    double centimeters; 

    //takes user input for feet and inches
    cout << "Enter two integers, one for feet and "
        << "one for inches: ";
    cin >> feet >> inches;
    cout << endl;

    //outputs to the user the previous inputs
    cout << "The numbers you have entered are " << feet
        << " for feet and " << inches
        << " for inches." << endl;

    //calculation
    totalInches = inches_Per_Foot * feet + inches;

    //outputs calculation
    cout << "The total number of inches = "
        << totalInches << endl;

    //calculation
    centimeters = centimeters_Per_Inch * totalInches;

    //outputs calculation
    cout << "The total number of centimeters = "
        << centimeters << endl;

    return 0;
}

