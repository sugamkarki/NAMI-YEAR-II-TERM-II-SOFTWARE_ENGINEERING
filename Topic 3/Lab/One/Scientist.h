
#ifndef ONE_SCIENTIST_H
#define ONE_SCIENTIST_H

#include "Student.h"
#include "Employee.h"
#include <string>

using namespace std;

class Scientist : public Student, public Employee {
private :
    int numberOfPublications;
public:
    void getData() {
        cout << "enter the number of publications" << endl;
        cin >> numberOfPublications;
    }

    void putData() {
        cout << "the number of publications is " << numberOfPublications << endl;
    }

};


#endif //ONE_SCIENTIST_H
