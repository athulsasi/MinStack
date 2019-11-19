/*********************************************************************************
* File name		: MinStack.cpp
* Author		: Athul Sasi
* Description	: MinStack class definition
*			      Here I've implemented solution for above question of creating a  
*				  simple stack using std::vector. All the operations work with a time 
*				  complexity O(1). Note - The question is stated further below.
* Remarks		: Compiled using Microsoft Visual Studio Express 2017 on Windows 10.
*				 (Note: C++11/14 supported compiler is required for compilation)
*********************************************************************************/

/* [QUESTION]
   ==========
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.
*/

#include "MinStack.h"
using namespace std;

/******************************************************************************
* Function name         : Push
* Author                : Athul Sasi
* Parameters			: [INPUT] nData
						  Integer data to be pushed to the stack.
* Return value			: None.
* Function description  : Pushes the input integer to the stack.
*******************************************************************************/
void MinStack::Push(IN int nData) {  
	Node obj; 
	obj.nData = nData;
        
	// Handle minimum value
	if (m_vecStack.empty()) {
		obj.nMin = nData;
	} else { 
		auto objTop = m_vecStack.back();  // Get top of stack
		if (nData < objTop.nMin) {
			obj.nMin = nData; // New element is the smallest
		}
		else {
			obj.nMin = objTop.nMin; // Keep existing minimum
		}
	}
        
	m_vecStack.push_back(obj);     // Time complexity O(1)
}
    
/******************************************************************************
* Function name         : Pop
* Author                : Athul Sasi
* Parameters			: None.
* Return value			: None.
* Function description  : Removes topmost element from the stack. Stack size is
*						  reduced by one if the stack is not empty.
*******************************************************************************/
void MinStack::Pop() {
	if (!m_vecStack.empty()) {
		m_vecStack.pop_back();      // Time complexity O(1)
	}
}
    

/******************************************************************************
* Function name         : Top
* Author                : Athul Sasi
* Parameters			: None.
* Return value			: - Integer data of topmost stack element
*						  - INT_MIN if stack is empty.
* Function description  : Retrieves integer data of top element from stack.
*******************************************************************************/
int MinStack::Top() {
	if (!m_vecStack.empty()) {
		return m_vecStack.back().nData;   // Time complexity O(1)
	}
	else {
		return INT_MIN;  // Return an invalid value.
	}
}


/******************************************************************************
* Function name         : GetMin
* Author                : Athul Sasi
* Parameters			: None.
* Return value			: - Minimum integer data in the stack. 
*						  - INT_MIN if stack is empty.
* Function description  : Gets minimum value from the stack.
*******************************************************************************/
int MinStack::GetMin() const {
	if (!m_vecStack.empty()) {
		return m_vecStack.back().nMin;   // Time complexity O(1)
	}
	else {
		return INT_MIN;   // Return an invalid value.
	}
}
