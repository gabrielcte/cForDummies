//
// factorial - calculate factorial using the while construct.
//

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

#include "factorial.h"

//
// factorial - return the factorial of the argument provided.
// 			   Return a 1 fot a invalid arguments
//             such as negative numbers.
//

int factorial (int nTarget)
{
	// start with an accumulator that's initialized to 1
	int nAccumulator = 1;
	for (int nValue = 1; nValue <= nTarget; nValue++)
	{
		nAccumulator *= nValue;
	}
	return nAccumulator;
}