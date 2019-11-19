/*********************************************************************************
* File name		: test.cpp
* Author		: Athul Sasi
* Description	: Application entry point - main() method. Here, it is used as
*				  test method. (Please refer MinStack.cpp for the question)
* Version  		: 1.0
* Remarks		: Compiled using Microsoft Visual Studio Express 2017 on Windows 10.
*				 (Note: C++11/14 supported compiler is required for compilation)
*********************************************************************************/

#include <iostream> // For "cout"
using namespace std;

#include "MinStack.h"

/*******************************************************************************
* Function name         : main
* Author                : Athul Sasi
* Parameters			: None
* Return value			: 0
* Function description  : Application's entry point. Here I provide some test 
*						  hard coded test data to test the stack.
********************************************************************************/
int main()
{
	MinStack objMinStack;

	cout << "Note - Some test operations & outputs on an empty stack" << endl;
	cout << "=======================================================" << endl << endl;

	// Insert some test data in the stack
	cout << "[OPERATION] Push values 2, -7, 78, 56 & -43 into empty stack.." << endl;
	objMinStack.Push(2);
	objMinStack.Push(-7);
	objMinStack.Push(78);
	objMinStack.Push(56);
	objMinStack.Push(-43);

	// Retrieve top of the stack
	cout << "[OPERATION] Get top value of stack " << endl;
	auto nTopValue = objMinStack.Top();
	cout << "[DISPLAY_OUTPUT] Top Value in stack = " << nTopValue << endl << endl;	// Prints -43

	cout << "[OPERATION] Get minimum value in stack " << endl;
	auto nMinValue = objMinStack.GetMin();
	cout << "[DISPLAY_OUTPUT] Min Value in stack = " << nMinValue << endl << endl;	// Prints -43

	// Pop from stack
	cout << "[OPERATION] Pop from stack " << endl;
	objMinStack.Pop();

	// Retrieve minimum value in stack
	cout << "[OPERATION] Get minimum value in stack " << endl;
	nMinValue = objMinStack.GetMin();
	cout << "[DISPLAY_OUTPUT] New min Value in stack after pop = " << nMinValue << endl << endl;	// Prints -7
	
	// Retrieve top of the stack
	nTopValue = objMinStack.Top();
	cout << "[OPERATION] Get top value in stack " << endl;
	cout << "[DISPLAY_OUTPUT] New top value in stack after pop = " << nTopValue << endl << endl;	// Prints 56

	// Insert a new minimum test value
	cout << "[OPERATION] Push value -271 into stack " << endl;
	objMinStack.Push(-271);

	// Retrieve again the minimum value in the stack
	cout << "[OPERATION] Get minimum value in stack " << endl;
	nMinValue = objMinStack.GetMin();
	cout << "[DISPLAY_OUTPUT] New min value in stack after push = " << nMinValue << endl << endl;	// Prints -271


	cout << "\nPress any key to exit... \n\n\n";
	getchar();	// Wait for the user to press a key to exit

	return 0;
}
