//
// Created by sk_np on 4/8/2021.
//

#ifndef TWO_PRODUCTIONWORKER_H
#define TWO_PRODUCTIONWORKER_H

#include "Employee.h"
#include <string>
using namespace std;

class ProductionWorker : public Employee {
private:
    int shift;
    double payRate;
public:
    ProductionWorker() {
        shift = 1;
        payRate = 0.0;
    }

    ProductionWorker(int shift, double payRate) {
        ProductionWorker::shift = shift;
        ProductionWorker::payRate = payRate;
    }

    int getShift() {
        return shift;

    }

    double getPayRate() {
        return payRate;
    }

    void setShift(int shift) {
        ProductionWorker::shift = shift;
    }

    void setPayRate(double payRate) {
        ProductionWorker::payRate = payRate;
    }
};


#endif //TWO_PRODUCTIONWORKER_H
