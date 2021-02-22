#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car
{
private:
    int yearModel;
    int make;
    int speed;

public:
    Car(int inputModel, int inputMake)
    {
        yearModel = inputModel;
        make = inputMake;
        speed = 0;
    }
    int getYearModel()
    {
        return yearModel;
    }
    int getMake()
    {
        return make;
    }
    int getSpeed()
    {
        return speed;
    }
    void setYearModel(int inputModel)
    {
        yearModel = inputModel;
    }
    void setMake(int make)
    {
        Car::make = make;
    }
    void setSpeed(int speed)
    {
        Car::speed = speed;
    }
};
#endif