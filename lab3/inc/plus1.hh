#include <iostream>
#include <cstdlib>
#include "klasa.hh"
#ifndef PLUS1_HH
#define PLUS1_HH

template <typename D>
class dodawanie 
    : public tab<D>
    {
public:
    void testplus1()    {
        srand(time(NULL));
        tab<D> obiekt;
        obiekt.x=10;
        obiekt.xi=(obiekt.x)+1;
            obiekt.tworzenie();
            obiekt.wypelnianie();
        for (int i=0;i<100000;i++)  {
            obiekt.nowatabplus1();
            obiekt.tab1natab2();
    //        obiekt.wyswietlanie();
            obiekt.destruktor();
            obiekt.x++;
            obiekt.tworzenie();
            obiekt.tab2natab1();
            obiekt.wypelnianie_plus1();
            obiekt.nowatabplus1del();
//            obiekt.wyswietlanie();
            obiekt.xi++;
       }
        std::cout << "koniec testu" << std::endl;
    }
};
#endif
