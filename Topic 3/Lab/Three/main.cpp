#include <iostream>
#include <string>
#include "Odometer.h"
#include "FuelGauge.h"

using namespace std;

int main() {
    Odometer *odometer = new Odometer();
    odometer->setFuel(15);

    while (odometer->getFuel() != 0) {
        odometer->increaseMileage();
        cout << odometer->getMileage() << endl;
        cout << odometer->getFuel() << endl;
    }
    return 0;
}