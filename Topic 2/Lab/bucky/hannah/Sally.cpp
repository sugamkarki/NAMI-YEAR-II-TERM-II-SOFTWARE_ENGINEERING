//
// Created by sk_np on 3/22/2021.
//

#include "Sally.h"
#include <iostream>

using namespace std;

Sally::Sally() {}

Sally::Sally(int num) {
    Sally::num = num;
}

Sally Sally::operator+(Sally aso) {
    Sally brandNew;
    brandNew.num = num + aso.num;
    return brandNew;
}