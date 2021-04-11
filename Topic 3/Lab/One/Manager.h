//
// Created by sk_np on 4/7/2021.
//

#ifndef ONE_MANAGER_H
#define ONE_MANAGER_H

#include "Employee.h"
#include "Student.h"
#include <string>

using namespace std;

class Manager : public Student, public Employee {
private :
    string titleInfo;
    int dues;
public:
    void getData() {
        cout << "enter the title info" << endl;
        cin >> titleInfo;
        cout << "enter the dues" << endl;
        cin >> dues;

    }

    void putData() {
        cout << "the title info is " << titleInfo << " and the dues is " << dues
             << endl;
    }

};


#endif //ONE_MANAGER_H
