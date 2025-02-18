//
// functionDemo - demonstrate how to use a function to simplify the logic of the program.
//
# include <cstdio>
# include <cstdlib>
# include <iostream>

using namespace std;

//
// sumSequence() - return the sum of a series of numbers
//                 entered by the user. Exit loop when
//                 the user enters a negative number.
//
int sumSequence()
{
    // create a variable into witch we will add the
    // numbers entered by the user
    int nAccumulator = 0;

    for(;;)
    {
        // read another value from the user
        int nValue;
        cout << "Next: ";
        cin >> nValue;

        // exit if nValue is negative
        if (nValue < 0)
        {
            break;
        }
        // add the value entered to the accumulated value
        nAccumulator += nValue;
    }

    //return the accumulated value to the caller
    return nAccumulator;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    cout << "This program sums sequences of numbers . \n"
         << "Enter a series of numbers. Entering a \n"
         << "negative number causes the program to \n"
         << "print the sum and start over with a new \n"
         << "sequence \n"
         << "Enter two negatives in a row to end the \n"
         << "program." << endl;

         // stay in loop getting input from the user
         // until he enters a negative number
         for(;;)
         {
             // accumulate a sequence
             int nSum = sumSequence();

             // if the sum is zero ...
             if (nSum == 0)
             {
                 // ... thenexit the program
                 break;
            }
            // display the result
            cout << "Sum = " << nSum << endl;
            }
         // wait until user is ready before terminating program
        // to allow the user to see the program results
        system("Pause");
        return 0;
}
