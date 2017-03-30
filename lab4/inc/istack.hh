#include <stack>
#include <iostream>

#ifndef ISTACK_HH
#define ISTACK_HH

class istack   {

    virtual void add(int element)=0;
    virtual void remove(int pozycja)=0;
    virtual void get(int pozycja)=0;
    virtual int size()=0;
    virtual int find()=0;
    virtual int push()=0;
    virtual int pop()=0;
};






#endif
