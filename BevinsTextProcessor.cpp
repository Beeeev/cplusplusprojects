// Levi Bevins, CIT 150, Lab 1

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

void initialize(int& lc, int list[]);
void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[]);

void characterCount(char ch, int list[]);
void writeTotal(ofstream& outtext, int lc, int list[]);


int main()
{
    //variables
    int lineCount;
    int letterCount[26];
    char ch;
    ifstream infile;
    ofstream outfile;
    
    //open file
    infile.open("textin.txt"); 

    //if file doesnt exist, return error
    if (!infile) 
    {
        cout << "Cannot open the input file."
             << endl;
        return 1;
    }

    //open out file
    outfile.open("textout.out");
    //intialize 
    initialize(lineCount, letterCount); 

    //get character
    infile.get(ch);

    //call copyText, increment linecount, read next character
    while (infile) 
    {
        copyText(infile, outfile, ch, letterCount); 
        lineCount++; 
        infile.get(ch);
    }

    //call writeTotal
    writeTotal(outfile, lineCount, letterCount);

    //close files
    infile.close(); 
    outfile.close();
}

//sets variables to 0
void intialize(int& lc, int list[])
{
    lc = 0;
    for (int j = 0; j < 26; j++)
    {
        list[j] = 0;
    }
}

//reads line, outputs line, calls characterCount for letter count.
void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[])
{
    while (ch != '\n')
    {
        outtext << ch;
        characterCount(ch, list);
        intext.get(ch);

    }
    outtext << ch;
}

//Converts letter to Uppercase, find index of array letter, increment count
void characterCount(char ch, int list[])
{
    int index;
    ch = toupper(ch); 
    index = static_cast<int>(ch) - static_cast<int>('A'); 

    if (0 <= index && index < 26)
        list[index]++;
} 

//outputs letter and line counts
void writeTotal(ofstream& outtext, int lc, int list[])
{
    outtext << endl;
    outtext << "The number of lines = " << lc << endl;

    for (int index = 0; index < 26; index++)
        outtext << static_cast<char>(index + static_cast<int>('A'))
                << " count = " << list[index] << endl;
}