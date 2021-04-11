//
// Created by sk_np on 4/8/2021.
//

#ifndef THREE_FUELGAUGE_H
#define THREE_FUELGAUGE_H


#include <string>

using namespace std;

class FuelGauge {
private:
    int amountOfFuel;
public:
    FuelGauge() {
        amountOfFuel = 0;
    }

    void setFuel(int amountOfFuel) {
        FuelGauge::amountOfFuel = amountOfFuel;
    }

    FuelGauge(int amountOfFuel) {
        FuelGauge::amountOfFuel = amountOfFuel;
    }

    int getFuel() {
        return amountOfFuel;
    }

    void increaseFuel() {
        if (amountOfFuel < 15) {
            amountOfFuel = amountOfFuel + 1;

        } else {
            cout << "fuel max reached" << endl;

        }
    }

    void decreaseFuel() {
        if (amountOfFuel > 0) {
            amountOfFuel = amountOfFuel - 1;

        } else {
            cout << "fuel min reached" << endl;

        }
    }
};


#endif //THREE_FUELGAUGE_H
