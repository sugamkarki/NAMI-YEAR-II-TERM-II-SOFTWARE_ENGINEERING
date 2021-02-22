#ifndef CIRCLE_H
#define CIRCLE_H
class Circle
{
private:
    double radius;
    double PI = 3.14;

public:
    Circle()
    {
        radius = 0;
    }
    Circle(double radius)
    {
        Circle::radius = radius;
    }
    void setRadius(double rad)
    {
        radius = rad;
    }
    double getRadius()
    {
        return radius;
    }
    double getArea()
    {
        return radius * radius * PI;
    }
    double getDiameter()
    {
        return 2 * radius;
    }
    double getCircumference()
    {
        return 2 * PI * radius;
    }
};
#endif