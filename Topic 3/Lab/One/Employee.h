//
// Created by sk_np on 4/7/2021.
//

#ifndef ONE_EMPLOYEE_H
#define ONE_EMPLOYEE_H

#include <string>

using namespace std;


class Employee {
private:
    string name;
    int employee_number;
public:
    void getData() {
        cout << "enter the  name" << endl;
        cin >> name;
        cout << "enter the employee number" << endl;
        cin >> employee_number;

    }

    void putData() {
        cout << "the employee name is " << name << " and the employee number is " << employee_number
             << endl;
    }
};


#endif //ONE_EMPLOYEE_H
