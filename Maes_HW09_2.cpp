//Program Name: Line Numbers
//Purpose: Write a program that asks the user for the name of a file. 
//Author: Hector L. Maes
//Date Last Modified: 10/21/24
// encrypt then decrypt

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream inFile;
    char inName[200];
    string inputLine = " ";
    int lineNum = 1;

    cout << "Enter the input file name: ";
    cin >> inName;
    inFile.open(inName);
    if (!inFile)
    {
        cout << "ERROR OPENING FILE " << inName << endl;
        return 1; 
    }

    while (!inFile.eof())
    {
        getline(inFile, inputLine, '\n');
        cout << setw(3) << right << lineNum << ": " << inputLine << endl; 
        lineNum++;
    }

    inFile.close();
    
    return 0;
}