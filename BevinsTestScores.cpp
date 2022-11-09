//Levi Bevins, Lab 2, Test Scores

#include <iostream>
using namespace std;

int main()
{
    //declare varibles
    int test_Score_1;
    int test_Score_2;
    int test_Score_3;
    int test_Score_4;
    int test_Score_5;
    double average;

    //prompts input for each score and stores the score
    cout << "Enter the first test score: ";
    cin >> test_Score_1;

    cout << "Enter the second test score: ";
    cin >> test_Score_2;

    cout << "Enter the third test score: ";
    cin >> test_Score_3;

    cout << "Enter the fourth test score: ";
    cin >> test_Score_4;

    cout << "Enter the fifth test score: ";
    cin >> test_Score_5;

    //calculation for average of scores
    average = static_cast<double>(test_Score_1 + test_Score_2 + test_Score_3 + test_Score_4 + test_Score_5) / 5;

    cout << "The average of the test scores you entered is: " << average;

    return 0;
}

