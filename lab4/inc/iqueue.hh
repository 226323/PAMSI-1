#include <iostream>

#ifndef IQUEUE_HH
#define IQUEUE_HH

class iqueue   {

    public:
    
    virtual void enqueue(int element)=0;
    virtual void remove()=0;
    virtual void size()=0;
    virtual void dequeue()=0;
};

#endif
