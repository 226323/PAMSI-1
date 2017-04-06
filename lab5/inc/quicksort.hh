#include <iostream>
#include "klasa.hh"
#include "plus1.hh"
#ifndef QUICKSORT_HH
#define QUICKSORT_HH

template <typename T>
class sort
    :  public tab<T>, dodawanie<T>
    {
public:
    T* tab_sort1 = nullptr;
    T* tab_sort2 = nullptr;
    void dwie_tablice(int max) {
        tab_sort1 = new T [max/2];        //póki co tablicę dzielę na pół, potem do dopracuję
        tab_sort2 = new T [max/2];
    }
    void przepisywanie(int max);
    void drukuj_tablice_sortowania(int max);
    };

    template <typename T>
    void przepisywanie(int max)    {
        for (int i; i<max; i++) {
            for (int j;j<max;j++)   { 
                if (tab<T>::tablica[i]<500) {             //przykładowa liczba, potem zrobię jakiś sposób
                    sort<T>::tab_sort1[i]=tab<T>::tablica[i];   //by czytał wartość tablicy będącą na środku czy coś 
                if (tab<T>::tablica[i]>=500)    {                 
                    sort<T>::tab_sort2[j]=tab<T>::tablica[i];
        
                }
                }
            }
        }
   } 

    template <typename T>
    void drukuj_tablice_sortowania(int max)    {               //tylko dla testów czy dobrze dzieli tablice
    std::cout << "pierwsza tablica sortowania";
    for (int i;i<max/2;i++)   {
        std::cout << sort<T>::tab_sort1[i] << std::endl;
        }
    std::cout << "druga tablica sortowania";
    for (int i;i<max/2;i++)   {
        std::cout << sort<T>::tab_sort2[i] << std::endl;
    }
    }

#endif
