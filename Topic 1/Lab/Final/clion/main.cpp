//
// Created by sk_np on 3/1/2021.
//

#include<iostream>
#include "Circle.cpp"

using namespace std;
//
//Circle::Circle(int rad) {
//    radius = rad;
//}
//
//int Circle::getRadius() {
//    return radius;
//}

int main() {
//    cout<<"hello"<<endl;
    Circle c = Circle(2);
    cout << c.getRadius() << endl;
    return 0;

}
