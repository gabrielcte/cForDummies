//
//	conversion - Program to convert tempererature from 
//		Celsius degrees into Farhrenheit
//		Fahrenheit = Celsius * (212-32)/100+32
//

# include <cstdio>
# include <cstdlib>
# include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
// enter the tempererature in Celsius
int celsius;
cout << "Enter the tempererature in Celsius:";
cin >> celsius;

// convert Celsius into Farhrenheit values
int fahrenheit;
fahrenheit = celsius + 9/5 + 32;

// output the results (followed by a Newline)
cout << "Fahrenheit value is:";
cout << fahrenheit << endl;

// wait until user is ready before terminating program
// to allow the user to see the program results
system("Pause");
return 0;
}
