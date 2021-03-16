//
// Created by sk_np on 3/2/2021.
//

#ifndef LAB_TAPE_H
#define LAB_TAPE_H

#include "Publication.h"



class Tape : public Publication {

private:
    float minutes;

public:
    void getData(){
            Publication::getData();
            cout<<"Enter the minutes of the tape "<< endl;
            cin>>minutes;
    }

    void putData(){
            Publication::putData();
            cout<<"The minutes of the tape is " << minutes;
    }


};


#endif //LAB_TAPE_H
