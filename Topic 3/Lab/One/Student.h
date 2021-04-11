//
// Created by sk_np on 4/7/2021.
//

#ifndef ONE_STUDENT_H
#define ONE_STUDENT_H

#include <string>

using namespace std;

class Student {
private:
    string schoolInfo;
    string degreeInfo;
public:
    void getData() {
        cout << "enter the school info" << endl;
        cin >> schoolInfo;
        cout << "enter the degree info" << endl;
        cin >> degreeInfo;

    }

    void putData() {
        cout << "the school details is " << schoolInfo << " and the degree info is " << degreeInfo
             << endl;
    }

};


#endif //ONE_STUDENT_H
