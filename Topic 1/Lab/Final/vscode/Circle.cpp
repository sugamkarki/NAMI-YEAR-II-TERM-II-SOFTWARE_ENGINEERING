#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle(int radius)
{
    Circle::Radius = radius;
}
int Circle::getRadius()
{
    return Radius;
}