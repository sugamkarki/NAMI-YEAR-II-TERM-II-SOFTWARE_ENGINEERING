#ifndef BOOK_H
#define BOOK_H

#include "Publication.h"

class Book : public Publication {

private:
    int pageCount;

public:
    void getData(){
            Publication::getData();
            cout<<"Enter the page count of the book "<< endl;
            cin>>pageCount;
    }

    void putData(){
            Publication::putData();
            cout<<"The page count of the book is " << pageCount;
    }


};


#endif