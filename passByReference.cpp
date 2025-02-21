//
// passByReference - demonstrate passing arguments to a 
//                   function both value and by reference.
//

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

// fn(int, int) - demonstrate a function that takes two
//                arguments and modifies their value

void fn(int nArg1, int nArg2)
{
    // modify the value of arguments
    nArg1 = 10;
    nArg2 = 20;
}

// fn(int*, int*) - this function takes its arguments
//                  by reference

void fn(int* pnArg1, int* pnArg2)
{
    // modify the value of the arguments
    *pnArg1 = 10;
    *pnArg2 = 20;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    // initialize two variables and display their values
    int nValue1 = 1;
    int nValue2 = 2;
    cout << "The value of nArg1 is " << nValue1 << endl;
    cout << "THe value of nArg2 is " << nValue2 << endl;

    // now try to modify them by calling a function
    cout << "Calling from fn(int, int)" << endl;
    fn(nValue1, nValue2);
    cout << "Returned from fn(int, int)" << endl;
    cout << "The value of nArg1 is " << nValue1 << endl;
    cout << "THe value of nArg2 is " << nValue2 << endl;


    // now try to modify them by calling a function that takes
    // addresses as arguments
    cout << "Calling from fn(int*, int*)" << endl;
    fn(&nValue1, &nValue2);
    cout << "Returned from fn(int*, int*)" << endl;
    cout << "The value of nArg1 is " << nValue1 << endl;
    cout << "THe value of nArg2 is " << nValue2 << endl;

	// wait until is ready before terminating program
	// to allow the user to see the program results
	system("Pause");
	return 0;
}