//
// Created by sk_np on 4/8/2021.
//

#ifndef THREE_ODOMETER_H
#define THREE_ODOMETER_H

#include "FuelGauge.h"

#include <string>

using namespace std;

class Odometer : public FuelGauge {
private :
    int mileage;
public:
    Odometer() {
        mileage = 0;
    }


    Odometer(int mileage) {
        Odometer::mileage = mileage;
    }
    Odometer::FuelGauge(int fuel){
        
    }

    int getMileage() {
        return mileage;
    }

    void increaseMileage() {
        if (mileage < 999999) {
            mileage = mileage + 1;
            if (mileage % 24 == 0) {
                FuelGauge::decreaseFuel();
            }
        } else {
            cout << "mileage max reached" << endl;
        }
    }
};


#endif //THREE_ODOMETER_H
