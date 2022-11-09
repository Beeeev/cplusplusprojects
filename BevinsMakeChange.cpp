//Levi Bevins, Lab 1, Make Change

#include <iostream>
using namespace std;

//constants
const int half_Dollar = 50;
const int quarter = 25;
const int dime = 10;
const int nickel = 5;

int main()
{
    //declare variable
    int change;

    //input change
    cout << "Enter change in cents: ";
    cin >> change;

    //output your input
    cout << endl;
    cout << "The change you entered is " << change
         << endl;

    //output half dollar calculation
    cout << "The number of half-dollars to be returned "
         << "is " << change / half_Dollar
         << endl;

    //output quarters calculation
    change = change % half_Dollar;
    cout << "The number of quarters to be returned is "
         << change / quarter << endl;

    //output dimes calculation
    change = change % quarter;
    cout << "The number of dimes to be returned is "
         << change / dime << endl;

    //ouput nickels calulation
    change = change % dime;
    cout << "The number of nickels to be returned is "
         << change / nickel << endl; 

    change = change % nickel;

    //output penny calculation
    cout << "The number of pennies to be returned is "
         << change << endl; 

    return 0;
}

