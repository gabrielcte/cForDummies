//
// incrementOperator - demonstrate the increment operator
//

# include <cstdio>
# include <cstdlib>
# include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
// demonstrate the increment operator
int n;

// first the prefix
n = 1;
cout << "The value of n is    " << n << endl;
cout << "The value of ++n is  " << ++n << endl;
cout << "The value of n afterwards is " << n << endl;

// now the posrfix
n = 1;
cout << "The value of n is    " << n << endl;
cout << "The value of n++ is  " << n++ << endl;
cout << "The value of n afterwards is " << n << endl;
cout << endl;

// wait until user is ready before terminating program
// to allow the user to see the program results
system("Pause");
return 0;
}
