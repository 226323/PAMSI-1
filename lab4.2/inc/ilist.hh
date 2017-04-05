#include <iostream>

#ifndef ILIST_HH
#define ILIST_HH

class ilist    {        //klasa ilist

    virtual void add(int element, int pozycja)=0;   //dodawanie elementu listy
    virtual void remove(int pozycja)=0;             //usuwanie elementu
    virtual void get(int pozycja)=0;                //czytanie elementu
    virtual int size()=0;                           //rozmiar listy
    virtual int find()=0;                           //szukanie po liście
    virtual int head()=0;                           //początek listy
    virtual int tail()=0;                           //koniec listy
};

#endif
