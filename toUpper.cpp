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
		 
}