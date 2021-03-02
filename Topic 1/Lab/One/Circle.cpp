#include <iostream>
#include "Circle.h"
using namespace std;

// int main()
// {
//     Circle c;
//     cout<<c.getRadius()<<endl;
//     return 0;
// }
Circle::Circle()
{
    radius = 0;
}
Circle::setRadius(int radUser)
{
    radius = radUser;
}
int Circle::getRadius()
{
    return radius;
}
double Circle::getArea()
{
    return PI * radius * radius;
}
double Circle::getDiameter()
{
    return 2 * radius;
}
double Circle::getCircumference()
{
    return 2 * PI * radius;
}