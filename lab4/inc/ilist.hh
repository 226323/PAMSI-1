#include <iostream>

#ifndef ILIST_HH
#define ILIST_HH

class ilist    {
    virtual void add(int element, int pozycja)=0;
    virtual void remove(int pozycja)=0;
    virtual void get(int pozycja)=0;
    virtual int size()=0;
    virtual int find()=0;
    virtual int head()=0;
    virtual int tail()=0;
};

#endif
