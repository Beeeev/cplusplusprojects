// Levi Bevins, CIT 150, Ch8 Lab 1

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAX_CODE_SIZE = 250;

//function prototypes
void readCode(ifstream& inFile, int list[], int& length, bool& lenCodeOk);
void compareCode(ifstream& infile, ofstream& outfile, const int list[], 
    int length);


int main()
{
    //variables
    int codeArray[MAX_CODE_SIZE];
    int codeLength;
    bool lengthCodeOk;
    ifstream incode;
    ofstream outcode;
    char inputFile[51];
    char outputFile[51];

    //userinput
    cout << "Enter the input file name: ";
    cin >> inputFile;
    cout << endl;

    //open file
    incode.open(inputFile);
    //if file doesnt exist
    if (!incode)
    {
        cout << "cannot open the input file";
        return 1;
    }
    //enter output file
    cout << "Enter the output file name: ";
    cin >> outputFile;
    cout << endl;

    //open output file
    outcode.open(outputFile);
    readCode(incode, codeArray, codeLength, lengthCodeOk); 
    if (lengthCodeOk)
        compareCode(incode, outcode, codeArray, codeLength);
    else
        cout << "Length of the secret code "
        << "must be <= " << MAX_CODE_SIZE
        << endl;

    //close files
    incode.close();
    outcode.close();
}

void readCode(ifstream& inFile, int list[], int& length, bool& lenCodeOk)
{
    lenCodeOk = true;
    inFile >> length; 
    if (length > MAX_CODE_SIZE)
    {
        lenCodeOk = false;
        return;
    }
    for (int count = 0; count < length; count++)
        inFile >> list[count];
}

void compareCode(ifstream& inFile, ofstream& outFile, const int list[], 
    int length)
{
    int length2;
    int digit;
    bool codeOk;
    codeOk = true; 
    inFile >> length2;

    if (length != length2)
    {
        cout << "The original code and its copy "
            << "are not of the same length."
            << endl;
        return;
    }
    outFile << "Code Digit Code Digit Copy"
        << endl;
    for (int count = 0; count < length; count++)
    {
        inFile >> digit;
        outFile << setw(5) << list[count]
                << setw(17) << digit;

        if (digit != list[count])
        {
            outFile << " code digits are not the same"
                << endl;
            codeOk = false;
        }
        else
            outFile << endl;
    }
    if (codeOk)
        outFile << "Message transmitted OK."
        << endl;
    else
        outFile << "Error in transmission. "
        << "Retransmit!!" << endl;
}
