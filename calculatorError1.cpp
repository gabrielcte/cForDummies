//
// calculatorError1 - the switchCalculator program but with a subtle error in it.
//

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

// prototipe declarations

int calculator(char cOperator, int nOper1, int nOper2);

int main(int nNumberofArgs, char* pszArgs[])
{
	// enter operand1 op operand2
	int nOper1;
	int nOper2;
	char cOperator;
	cout << "Enter 'value1 op value2' \n"
		 << "where op is +, -, *, / or %:" << endl;
	cin >> nOper1 >> cOperator >> nOper2;
	
	// echo what the user entered followed by the
	// results of the operation
	cout << nOper1 << " "
		 << cOperator << " "
		 << nOper2 << " = "
		 << calculator(cOperator, nOper1, nOper2)
		 << endl;
		 
	// wait until user is ready before terminating program
	// to allow the user to see the program results
	
	system("Pause");
	return 0;
}

// calculator - return the result of the cOperator
// 			    operation performed on nOper1 and nOper2
int calculator(char cOperator, int nOper1, int nOper2)
{
	int nResult = 0;
	switch (cOperator)
	{
		case '+':
			nResult = nOper1 + nOper2;
		case '-':
			nResult = nOper1 - nOper2;
			break;
		case '*':
		case 'x':
		case 'X':
			nResult = nOper1 * nOper2;
			break;
		case '/':
			nResult = nOper1 / nOper2;
			break;
		case '%':
			nResult = nOper1 % nOper2;
			break;
		default:
			// didn't understand the operator
			cout << " is not understood";
	}
return nResult;
} 