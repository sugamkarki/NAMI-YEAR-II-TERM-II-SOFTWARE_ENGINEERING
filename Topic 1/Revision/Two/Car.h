#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car {
public:
    //    Car(int yearModel, string make);

    Car(int yearModel, string make, int speed);

    int getYearModel() ;

    int getSpeed();

    string getMake();

    void accelerate();

    void brake();

private:
    int yearModel;
    string make;
    int speed;
};

#endif