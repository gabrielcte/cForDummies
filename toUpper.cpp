//
// toUpper - convert a string input by the user to all upper case.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

// toUpper - convert every character in an ADCIIZ string to uppercase
void toUpper (char szTarget[], int nTargetSize)
{
	for(int nT = 0; nT < (nTargetSize - 1) && szTarget[nT] != '\0'; nT++)
	{
		szTarget[nT] = toupper(szTarget[nT]);
	}
}

int main (int nNumberofArgs, char* pszArgs[])
{
	// Pronpt user
	cout << "This program accpets a string \n"
		 << "from the keyboard and echoes the \n"
		 << "string in all caps. \n" << endl;
	
	// input two strings
	cout << "Enter string: ";
	char szString[256];
	cin.getline(szString, 256);

	// now convert the string to all uppercase
	toUpper(szString, 256);

	// and display the result
	cout << "All caps version: <"
	<< szString
	<< ">" << endl;

	// wait until is ready before terminating program
	// to allow the user to see the program results
	system("Pause");
	return 0;
		 
}