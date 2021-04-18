//Implementation File
 
#include <iostream>
#include <string>
#include "myStack.h"
#include "infixToPostfix.h"
 
using namespace std; 
 
void infixToPostfix::convertToPostfix()
{
    stackType<char>  stack(50);
    int i;
    char stackOpr;

    stack.initializeStack();
    i = 0;
    pfx = "";

    int len = infx.length();

    for (i = 0; i < len; i++)
        if (infx[i] >= 'A' && infx[i] <= 'Z')
            pfx = pfx + infx[i];
        else
        {
            switch (infx[i])
            {
            case '(':  
                stack.push(infx[i]);
                break;
            case ')':   
                stackOpr = stack.top();
                stack.pop();

                while (stackOpr != '(')
                {
                    pfx = pfx + stackOpr;

                    if (!stack.isEmptyStack())
                    {
                        stackOpr = stack.top();
                        stack.pop();
                    }
                    else
                        break;
                }
                break;
			case ';': 
			case ' ':  
                break;
			   
			default:
                if (stack.isEmptyStack())
                    stack.push(infx[i]);
                else
                {
                    stackOpr = stack.top();
                    stack.pop();

                    while (precedence(stackOpr,infx[i]))
                    {
                        pfx = pfx + stackOpr;
                        if (!stack.isEmptyStack())
                        {
                            stackOpr = stack.top();
                            stack.pop();
                        }
                        else
                                break;
                    }

                    if (!precedence(stackOpr,infx[i]))
                        stack.push(stackOpr);

                    stack.push(infx[i]);
                }
										
            }//end switch
        }//end else

    while (!stack.isEmptyStack())
    {
        pfx += stack.top();
        stack.pop();
    }
}//end convertToPostfix


bool infixToPostfix::precedence(char opr1, char opr2)
{
    int prec1, prec2;

    if (opr1 == '*' || opr1 =='/')
        prec1 = 2;
	else if (opr1 == '+' || opr1 == '-')
        prec1 = 1;
    else if (opr1 ='(')
        prec1 = 0;

    if (opr2 == '*' || opr2 == '/')
        prec2 = 2;
    else if (opr2 =='+' || opr2 == '-')
        prec2 = 1;

	return (prec1 >= prec2);
}//end precedence

void infixToPostfix::getInfix(string data)
{
    infx = data;
    convertToPostfix();
}

void infixToPostfix::showInfix()
{
    cout << "Infix Expression: " << infx << endl;
}

void infixToPostfix::showPostfix()
{
    cout << "Postfix Expression: " << pfx << endl;
}

infixToPostfix::infixToPostfix(string ifx)
{
    infx = ifx;
    convertToPostfix();
}



