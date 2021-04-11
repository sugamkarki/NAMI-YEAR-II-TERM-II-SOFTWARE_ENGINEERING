#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

Car::Car(int y, string m, int s = 0) {
    Car::yearModel = y;
    Car::make = m;
    Car::speed = 0;
}

void Car::accelerate() {
    Car::speed = Car::speed + 5;

}

void Car::brake() {
    Car::speed = Car::speed - 5;
}

string Car::getMake() {
    return Car::make;
}
int Car::getSpeed() {
    return Car::speed;
}