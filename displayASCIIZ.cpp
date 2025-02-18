//
// displayASCII - display an ASCIIZ string one character
//                at a time as an example of ASCIIZ manipulation
//

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

// displayString - display an ASCIIZ string one character
//                 at a time
void displayString(char szString[])
{
	for(int index = 0; szString[index] != '\0'; index++)
	{
		cout << szString[index];
	}
}

int main(int nNumberofArgs, char* pszArgs[])
{
	char szName1[] = {'S', 't', 'e', 'p',
	                  'h', 'e', 'n', '\0'};
	char szName2[] = "Stephen";
	
	cout << "Output szName1: ";
	displayString(szName1);
	cout << endl;
	
	cout << "Output szName2: ";
	displayString(szName2);
	cout << endl;
	
	// wait until is ready before terminating program
	// to allow the user to see the program results
	system("Pause");
	return 0;
}