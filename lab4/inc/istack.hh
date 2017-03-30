#include <stack>
#include <iostream>

#ifndef ISTACK_HH
#define ISTACK_HH

class istack   {                    //klasa istack

    virtual void add(int element)=0;        //dodawanie do stosu
    virtual void remove(int pozycja)=0;     //usuwanie ze stosu
    virtual void get(int pozycja)=0;        //pobieranie ze stosu
    virtual int size()=0;                   //rozmiar stosu
    virtual int find()=0;                   //szukanie po stosie
    virtual int push()=0;                   //umieszczanie nowego elementu na stosie
    virtual int pop()=0;                    //pobieranie elementu ze stosu
};






#endif
