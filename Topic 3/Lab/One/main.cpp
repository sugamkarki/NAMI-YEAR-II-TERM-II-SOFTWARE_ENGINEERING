#include <iostream>
#include <string>
#include "Scientist.h"
#include "Student.h"
#include "Manager.h"
#include "Laborer.h"
#include "Employee.h"

using namespace std;

int main() {
//    Laborer *laborer = new Laborer();
//    laborer->Employee::getData();
//    laborer->Employee::putData();
    Scientist *s = new Scientist();
    s->Employee::getData();
    s->Employee::putData();
}
