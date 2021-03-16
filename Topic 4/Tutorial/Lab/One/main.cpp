#include<iostream>
#include "Book.h"
#include "Tape.h"
#include "Publication.h"

using namespace std;

int main() {
    int num;
    cout<<"enter 1 for book and 2 for tape"<<endl;
    cin>>num;
    Publication *pub[2] = {new Book , new Tape };
    if(num==1){
        pub[0]->getData();
        pub[0]->putData();
    }

    else{
        pub[1]->getData();
        pub[1]->putData();
    }
}