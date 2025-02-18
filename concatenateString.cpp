//
// concatenateString - demonstrate the manipulation of ASCIIZ strings
//                     by implementing a concatenate function.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// concatenateString - concatenate one string onto the end of another

void concatenateString(char szTarget[], int nTargetSize, const char szSource[])
{
	// first find the end of the target string
	int nT;
	for(nT = 0; szTarget[nT] != '\0'; nT++)
	{
	}
	
	// now copy the contents of the source string into
	// the target string, begining at 'nT'but don't
	// write beyond the nTargetSize'th element (-1 to
	// leave room for the terminating null)
	
	for (int nS = 0; nS < (nTargetSize-1) && szSource[nS] != '\0'; nT++, nS++)
	{
		szTarget[nT] = szSource[nS];
	}
	
	// add the terminator to szTarget
	szTarget[nT] = '\0';
}

int main(int nNumeroArgs, char* pszArgs[])
{
	// Prompt user
	cout << "This progam accepts two strings \n"
		 << "from the keyboard and outputs them \n"
		 << "concatenated together. \n" << endl;
	// input two strings
	cout << "Enter first string: ";
	int nTargetSize = 256;
	char szString1[nTargetSize];
	cin.getline(szString1, nTargetSize);
	
	cout << "Enter second string: ";
	char szString2[256];
	cin.getline(szString2, 256);
	
	// now concatenate one onto the end of the other
	cout << "Concatenate first string onto second"
		 << endl;
	concatenateString(szString1, nTargetSize, szString2);
	
	// and display the result
	cout << "Result: <"
		 << szString1
		 << ">" << endl;
		 
	// wait until is ready before terminating program
	// to allow the user to see the program results
	system("Pause");
	return 0;
}