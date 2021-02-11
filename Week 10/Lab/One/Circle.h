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
    
    Circle()
    {
        radius = 0;
        // PI
    }
    void Circle::setRadius(int radUser)
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
};
#endif