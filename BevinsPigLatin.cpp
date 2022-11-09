// Levi Bevins, CIT 150, Ch7 Lab 1
#include <iostream>
#include <string>

using namespace std;

//function prototypes
bool isVowel(char ch);
string rotate(string pStr);
string pigLatinString(string pStr);

int main()
{
    //Prompt user to enter a word and store it
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << endl;
    //outputs users pig latin form of their string using pig latin functions
    cout << "The pig Latin form of " << str << " is: "
         << pigLatinString(str) << endl;
}

//function checking for vowels
bool isVowel(char ch)
{
    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
        return true;
    default:
        return false;
    }
}

//moves non vowels to the end till it finds a vowel
string rotate(string pStr)
{
    string::size_type len = pStr.length();
    string rStr;
    rStr = pStr.substr(1, len - 1) + pStr[0];
    return rStr;
}

//converts words to pig latin
string pigLatinString(string pStr)
{
    string::size_type len;
    bool foundVowel;
    string::size_type counter;
    //if first letter is a vowel add -way
    if (isVowel(pStr[0]))
        pStr = pStr + "-way";
    else
    {
        pStr = pStr + '-';
        //calls rotate to start rotating till vowel is found
        pStr = rotate(pStr); 
        len = pStr.length();
        foundVowel = false;
        for (counter = 1; counter < len - 1;
            counter++) 
            if (isVowel(pStr[0]))
            {
                foundVowel = true;
                break;
            }
            else
                pStr = rotate(pStr);
        if (!foundVowel)
            pStr = pStr.substr(1, len) + "-way";
        else
            pStr = pStr + "ay";
    }
    return pStr;
}
