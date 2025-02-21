/*
concatenateHeap - similar to concatenateString except
                  this version stores the concatenated
                  string in memory allocated from the 
                  heap so that we guaranteed that the
                  target array is always large enough
*/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

// concatenateString - concatenate two strings together
//                     into an array allocated off of the heao

char* concatenateString(const char szSrc1[], const char szSrc2[])
{
    // allocate an array of sufficient length
    int nTargetSize = strlen(szSrc1) + strlen(szSrc2) + 1;
    char* pszTarget = new char[nTargetSize];

    // first copy the first string into the target
    int nT;
    for(nT = 0; szSrc1[nT] != '\0'; nT++)
    {
        pszTarget[nT] = szSrc1[nT];
    }

    // now copy the contents of the second string onto the end of the first
    for(int nS = 0; szSrc2[nS] != '\0'; nT++, nS++)
    {
        pszTarget[nT] = szSrc2[nS];
    }

    // add the terminator to szTarget
    pszTarget[nT] = '\0';

    //return ther terminator to the caller
    return pszTarget;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    // Prompt user
    cout << "This program accpets two strings \n"
         << "from the keyboard and outputs them \n"
         << "concatenated together. \n" << endl;
    
    // input two strings
    cout << "Enter the first string: ";
    char szString1[256];
    cin.getline(szString1, 256);

    cout << "Enter the second string: ";
    char szString2[256];
    cin.getline(szString2, 256);

    //now concatenate one onto the end of the other
    cout << "Concatenate second string onto the first"
         << endl;
    char* pszT = concatenateString(szString1, szString2);

    // and display the result
    cout << "Result: <"
         << pszT
         << ">" << endl;

    // return the memory to the heap
    delete[] pszT;
    pszT = NULL;

    // wait until is ready before terminating program
	// to allow the user to see the program results
	system("Pause");
	return 0;
}