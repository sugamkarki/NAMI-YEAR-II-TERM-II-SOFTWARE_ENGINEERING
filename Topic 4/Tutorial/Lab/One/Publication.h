#ifndef PUBLICATION_H
#define PUBLICATION_H
#include <string>
using namespace std;
class Publication {
private:
    double bookPrice;
    string title;

public:
    virtual void getData() {
        cout << "Enter the book price" << endl;
        cin >> bookPrice;
        cout << "Enter the book title" << endl;
        cin >> title;
    }

    virtual void putData() {
        cout << "The book price is " << bookPrice << " and the title is " << title << endl;
    }
};


#endif