/*********************************************************************************
* File name		: MinStack.h
* Author		: Athul Sasi
* Description	: MinStack class declaration
*			      Here I've implemented solution for MinStack question of creating a
*				  simple stack using std::vector in which all operations work with
*				  time complexity O(1). Please refer MinStack.cpp for the question.
*********************************************************************************/

#ifndef _MIN_STACK_H  // File header guard (avoids multiple inclusions)
#define _MIN_STACK_H

#include <vector>

// Definitions for improving code readability
#define IN
#define OUT

/********************************************************************************
* Class name			: MinStack
* Author                : Athul Sasi
* Class description		: Encapsulates the behaviour of a simple Stack.
*********************************************************************************/
class MinStack final { // Note: C++11 'final' identifier to indicate that it's not meant for inheriting.

private:

	// Stack element
	struct Node {
		int nMin;	// Minimum value (kept this to ensure we retrieve in O(1) time complexity)
		int nData; // Integer data
	};

	// Stack object
	std::vector<Node> m_vecStack;

public:

	// Note: Explicitly defaulted special member functions (C++11).
	MinStack() = default;
	~MinStack() = default;

	// Pushes data into the stack
	void Push(IN int nData);

	// Pops topmost element from the stack
	void Pop();

	// Gets topmost element from the stack
	int Top();

	// Get minimum integer value from the stack.
	int GetMin() const;
};

#endif				/* _MIN_STACK_H */