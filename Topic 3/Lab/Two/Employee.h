//
// Created by sk_np on 4/8/2021.
//

#ifndef TWO_EMPLOYEE_H
#define TWO_EMPLOYEE_H

#include <string>
using namespace std;
class Employee {
private:
    string name;
    int employeeNumber;
    string hireDate;
public:
    string getName() {
        return name;

    }

    string getHireDate() {
        return hireDate;
    }

    int getEmployeeNumber() {
        return employeeNumber;
    }

    void setName(string name) {
        Employee::name = name;
    }

    void setEmployeeNumber(int empNumber) {
        Employee::employeeNumber = empNumber;
    }

    void setHireDate(string hireDate) {
        Employee::hireDate = hireDate;
    }
};


#endif //TWO_EMPLOYEE_H
