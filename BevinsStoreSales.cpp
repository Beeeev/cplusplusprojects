// Levi Bevins, CIT 150, Lab 2

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    //variables
    double salesNumbers[8];
    double sum = 0;
    int maxIndex = 0;
    double largestSale = 0;
    double smallestSale = 0;
    double average = 0;
    
    for (int day = 1; day < 8; day++)
    {
        //user inputs numbers 7 times and stores into array
        cout << "Enter sales for day " << day << " >> ";
        cin >> salesNumbers[day];
        //when 7 have been stored start next loop
        if (day == 7)
        {
            for (int day = 1; day < 8; day++)
            {
                //prints each day enter by user
                cout << "The sales on day " << day << " was $" << salesNumbers[day] << endl;
                //calculates average 
                sum += salesNumbers[day];
                average = sum / day;
            
                //checks for highest number and stores it
                if (salesNumbers[maxIndex] < salesNumbers[day])
                    maxIndex = day;
                largestSale = salesNumbers[maxIndex];
                //checks for lowest number and stores it
                if (salesNumbers[maxIndex] > salesNumbers[day])
                    maxIndex = day;
                smallestSale = salesNumbers[maxIndex];
            }  
        }
        
    }
    //displays results to users and sets decimal points to 2
    cout << fixed << showpoint << setprecision(2);
    cout << "The highest amount of sales was $" << largestSale << endl;
    cout << "The lowest amount of sales was $" << smallestSale << endl;
    cout << "The average amount of sales was $" << average << endl;
    

}



