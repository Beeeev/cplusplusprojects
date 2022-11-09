// Levi Bevins, Pet Day Care, CIT150

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //const variables
    const int UNDER_10_AND_LESSTHAN11 = 12;
    const int OVER_10_AND_LESSTHAN11 = 15;
    const int OVER_25_AND_LESSTHAN11 = 19;
    const int UNDER_10_AND_MORETHAN11 = 10;
    const int OVER_10_AND_MORETHAN11 = 12;
    const int OVER_25_AND_MORETHAN11 = 17;
    //variables
    int amountOfDays;
    int petWeight;
    string petName;

    //name input
    cout << "What is your dogs name? ";
    cin >> petName;

    //weight input
    cout << "What does the dog weigh, in pounds? ";
    cin >> petWeight;

    //days of care input
    cout << "How many days will your dog need care? ";
    cin >> amountOfDays;

    if (petWeight < 10)
    {
        if (amountOfDays < 11)
        {
            cout << "The daily rate for " << petName << " is "
                 << UNDER_10_AND_LESSTHAN11;
            cout << " Per month you will pay " 
                 << amountOfDays * UNDER_10_AND_LESSTHAN11;
        }
        else
        {
            cout << "The daily rate for " << petName << " is "
                << UNDER_10_AND_MORETHAN11;
            cout << " Per month you will pay "
                << amountOfDays * UNDER_10_AND_MORETHAN11;
        }

        
    }
    else if (petWeight > 10 && petWeight < 25)
    {
        if (amountOfDays < 11)
        {
            cout << "The daily rate for " << petName << " is "
                << OVER_10_AND_LESSTHAN11;
            cout << " Per month you will pay "
                << amountOfDays * OVER_10_AND_LESSTHAN11;
        }
        else
        {
            cout << "The daily rate for " << petName << " is "
                << OVER_10_AND_MORETHAN11;
            cout << " Per month you will pay "
                << amountOfDays * OVER_10_AND_MORETHAN11;
        }
    }
    else
    {
        if (amountOfDays < 11)
        {
            cout << "The daily rate for " << petName << " is "
                << OVER_25_AND_LESSTHAN11;
            cout << " Per month you will pay "
                << amountOfDays * OVER_25_AND_LESSTHAN11;
        }
        else
        {
            cout << "The daily rate for " << petName << " is "
                << OVER_25_AND_MORETHAN11;
            cout << " Per month you will pay "
                << amountOfDays * OVER_25_AND_MORETHAN11;
        }

    }



}

