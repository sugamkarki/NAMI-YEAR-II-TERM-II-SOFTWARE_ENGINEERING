// This program demonstrates the Stack template.
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main()
{
	int x = 9;
	int y = 0;
	Stack<int> stack(20);
	stack.push(3);
	stack.push(4);
	stack.push(x);
	stack.push(x+2);
	y = stack.top();
	stack.pop();
	stack.push(x+y+3);
	stack.push(y-2);
	stack.push(8);
	x = stack.top();
	stack.pop();
	cout << "x= " << x << endl;
	cout << "y= " << y << endl;
     while (!stack.isEmptyStack())
     {
        cout << stack.top() << endl;
        stack.pop();
     }
	return 0;
}
