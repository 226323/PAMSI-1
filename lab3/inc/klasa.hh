//using namespace std;
#include <iostream>
#ifndef KLASA_HH
#define KLASA_HH
    template <typename T>
    class tab {
    public:
    int x;
    int xi;
    T* tablica=nullptr; 
    T* tablica1;
    void tworzenie();    
    void wypelnianie();
    void wyswietlanie();
    void destruktor();
    void nowatabplus1();
    void tab1natab2();
    void nowatabplus1del();
    void wyswietlanie1();
    void destruktor1();
    void tab2natab1();
    void wypelnianie_plus1();


    };

    template <typename T>
    void tab<T>::tworzenie()    {
        tablica = new T [x];
    }
    
    template <typename T>
    void tab<T>::destruktor()  {
        delete [] tablica;
    }

    template <typename T>   
    void tab<T>::nowatabplus1()    {
        tablica1 = new T [xi];
    }
    
    template <typename T>
    void tab<T>::destruktor1()    {
        delete [] tablica1;
    }


    template <typename T>
    void tab<T>::wypelnianie()   {
    for (int i=0; i<x;i++){
        tablica[i]=rand();
        }
    }
    
    template <typename T>
    void tab<T>::wypelnianie_plus1()    {
    tablica[x-1]=rand();
    }    

 
    template <typename T>
    void tab<T>::tab1natab2()     {
    for (int i=0;i<x;i++)   {
        tablica1[i]=tablica[i];
        }
    }   
    template <typename T>
    void tab<T>::tab2natab1()   {
    for (int i=0;i<xi;i++)  {
        tablica[i]=tablica1[i];
        }
    }
    
    template <typename T>
    void tab<T>::nowatabplus1del()  {
        delete [] tablica1;
    }
 
    template <typename T>
    void tab<T>::wyswietlanie()  {
    for (int i=0;i<x;i++)   {
        std::cout << tablica[i];
        std::cout << std::endl;
        }
    }    
    
    template <typename T>
    void tab<T>::wyswietlanie1()  {
    for (int i=0;i<xi;i++)   {
        std::cout << tablica1[i];
        std::cout << std::endl;
        }
    }    

#endif
