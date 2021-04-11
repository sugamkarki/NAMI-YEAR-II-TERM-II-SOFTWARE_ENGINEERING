//
// Created by sk_np on 4/8/2021.
//

#include <iostream>
#include <string>
#include "ProductionWorker.h"

using namespace std;

int main() {
//    cout<<"hi"<<endl;
    ProductionWorker *sugam = new ProductionWorker();
    sugam->setName("Sugam");
    sugam->setEmployeeNumber(55667);
    sugam->setHireDate("2020March");
    sugam->setShift(1);
    sugam->setPayRate(565.66);
    cout << "the name is " << sugam->getName() << ". The number is " << sugam->getEmployeeNumber() << ". his shift is "
         << sugam->getShift() << " and his payrate is " << sugam->getPayRate() << endl;
    return 0;
}