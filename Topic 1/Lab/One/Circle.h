#ifndef CIRLCE_H
#define CIRLCE_H

class Circle
{
private:
    int radius;
    double PI = 3.14159;

public:
    Circle();
    Circle(int, int);
    void setRadius(int);
    int getRadius();
    double getArea();
    double getDiameter();
    double getCircumference();
    

};
#endif