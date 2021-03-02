//
//  VirtualExample.cpp
//  
//
//  Created by Suraj Ajit on 02/02/2016.
//
//

#include <stdio.h>
#include <iostream>
using namespace std;
class A
{
public:
    void print()
    {
        cout << "Hello" << endl;
    }
};

class B: public A
{
public:
    void print()
    {
        cout << "Goodbye" << endl;
    }
};

void display(A &obj)
{
    obj.print();
}

int main()
{
    A a;
    B b;
    display(a);// prints Hello
    display(b);// prints Hello in C++ but prints Goodbye in Java (dynamic binding)
    // To make C++ print Goodbye for above you need to declare print as virtual in base class.
}