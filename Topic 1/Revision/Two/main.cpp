//
// Created by sk_np on 3/21/2021.
//

#include <iostream>
#include "Car.cpp"
#include <string>

using namespace std;

int main() {
    Car car(1990, "Corolla");
    cout << car.getMake() << endl;
    car.accelerate();
    car.accelerate();
    car.accelerate();
    car.accelerate();
    cout << car.getSpeed() << endl;
    car.brake();
    cout << car.getSpeed() << endl;

    return 0;

}
