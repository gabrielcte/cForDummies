//
// pyWithC - embedding python in a C/C++ code.
//

#include <Python.h>

int main(int argc, char **argv)
{
    // Initialize Python interperter
    Py_Initialize();
	// Write you python code
	PyRun_SimpleString("print('Hellow C++ from Python')");
	// Finalize Python interperter
	Py_Finalize();
	
	// wait until user is ready before terminating program
	// to allow the user to see the program results
	system("Pause");
	return 0;
}
