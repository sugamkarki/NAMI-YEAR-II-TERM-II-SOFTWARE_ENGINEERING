#include <iostream>
#include "Circle.h"
using namespace std;
int main()
{
    double r;
    cout << "enter the radius" << endl;
    cin >> r;
    Circle c = {r};
    c.setRadius(5);
    cout << c.getRadius() << endl;
    cout << c.getArea() << endl;
    cout << c.getDiameter() << endl;
    cout << c.getCircumference() << endl;
    // cout<<c.getRadius()<<endl;
    return 0;
}