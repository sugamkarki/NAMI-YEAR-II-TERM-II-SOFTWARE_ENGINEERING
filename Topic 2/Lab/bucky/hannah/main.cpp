//
// Created by sk_np on 3/22/2021.
//

#include <iostream>
#include "Sally.cpp"

using namespace std;

int main() {
    Sally a(34);
    Sally b(45);
    Sally c;
    c = a + b;
    cout << c.num << endl;
    return 0;
}