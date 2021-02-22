#include <iostream>
#include "Car.h"
using namespace std;
int main()
{
    int speed, make, model;
    cout << "enter speed";
    cin >> speed;
    cout << "enter make";
    cin >> make;
    cout << "enter model" << endl;
    cin >> model;
    Car car={make,model};
    cout<<car.getMake()<<endl;
    return 0;
}