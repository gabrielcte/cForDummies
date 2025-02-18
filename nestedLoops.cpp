//
// nestedLoops - this program uses a nested loop to calculate the multiplication table
//

# include <cstdio>
# include <cstdlib>
# include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // display the column headings
    int nColumn = 0;
    cout << " ";
    while (nColumn < 10)
    {
        // set the display width to two characters
        // (even for one digit numbers)
        cout.width(2);

        // now display the column number
        cout << nColumn << " ";

        // increment to the next column
        nColumn++;

    }
    cout << endl;

    // now go loop throught the rows
    int nRow = 0;
    while (nRow < 10)
    {
        // start with the row value
        cout << nRow << " - ";

        // now for each row, start with column 0 and
        // go through column 9
        nColumn = 0;
        while(nColumn < 10)
        {
            // display the product of the column*row
            // (use 2 characters even whenproduct is
            // a sigle digit)
            cout.width(2);
            cout << nRow * nColumn << " ";

            // go to next column
            nColumn++;
        }

        // go to next row
        nRow++;
        cout << endl;
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("Pause");
    return 0;
}
