#include <iostream>
#include "Circle.h"
using namespace std;
int main()
{
    Circle c = Circle(7);
    cout << c.getRadius() << endl;
    return 0;
}