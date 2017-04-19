#include <iostream>
#include "klasa.hh"
#include "plus1.hh"
#ifndef QUICKSORT_HH
#define QUICKSORT_HH

template <typename T>
class sort
    :  public mnozenie<T>
    {
public:
    T* tab1L = nullptr;
    T* tab1P = nullptr;
    T* tab1R = nullptr;
    T* quicktab=nullptr;
    void tworzenie(int max)    {
    quicktab = new T [max];
    }
    void wypelnianie(int max)   {
        for (int i=0;i<max;i++) {
            quicktab[i]=rand()%10000;
        }
    }

   
    void przepisywanie(int max);
    void drukuj_tablice_sortowania(int max);
    };

    template <typename T>
    void sort<T>::przepisywanie(int max)    {
        T piwot=quicktab[0];
        std::cout << piwot<< " piwot \n";
        int j=0;
        int k=0;
        int m=0;
//        tab1L = new T [max];
        tab1P = new T [max];
//        tab1R = new T [max];
            

       
    for (int i=0; i<max; i++)   {
        if (quicktab[i]<piwot)   {
            if (j==0)   {
            j++;
            tab1L = new T [1];
            tab1L[0]=quicktab[i];   
            
            }
            else    {
            
            T* tab1Ln = nullptr;
            
            tab1Ln= new T [j];
            for (int l=0; l<j;l++)  {   
                tab1Ln[l]=tab1L[l];
            }
            //j++;
            delete [] tab1L;
            tab1L = new T [j];
            for (int l=0;l<j;l++)   {
                tab1L[l]=tab1Ln[l];
            }
            tab1L[j]=quicktab[i];
            j++;
            }
        }
         
        if (quicktab[i]==piwot)   {          //ogarnąć
            tab1P[m]=quicktab[i];
            m++;
        }

        if (quicktab[i]>piwot)   {
 //           tab1R[k]=quicktab[i];
 //           k++;
           if (k==0)   {
            k++;
            tab1R = new T [1];
            tab1R[0]=quicktab[i];   
             
            }
            else    {
            
            T* tab1Rn = nullptr;
            
            tab1Rn= new T [k];
            for (int l=0; l<k;l++)  {   
                tab1Rn[l]=tab1R[l];
            }
            //j++;
            delete [] tab1R;
            tab1R = new T [k];
            for (int l=0;l<k;l++)   {
                tab1R[l]=tab1Rn[l];
            }
            tab1R[k]=quicktab[i];
            k++;
            }
        }
    }
    
    std::cout << "\n tab1L \n";
    for (int i=0;i<j;i++){
        std::cout <<tab1L[i] << " \n";}
        std::cout << "\n tab1P \n";
    for (int i=0;i<m;i++){
        std::cout <<tab1P[i] << " \n";
    }
        std::cout << "\n tab1R \n";
    for (int i=0;i<k;i++){
         std::cout <<tab1R[i] << " \n";
    }
     
 





    }





    template <typename T>
    void sort<T>::drukuj_tablice_sortowania(int max)    {               //tylko dla testów czy dobrze dzieli tablice
    std::cout << "pierwsza tablica sortowania \n" ;
    for (int i;i<max/2;i++)   {
        std::cout << sort<T>::tab_sort1[i] << std::endl;
        }
    std::cout << "druga tablica sortowania \n" ;
    for (int i;i<max/2;i++)   {
        std::cout << sort<T>::tab_sort2[i] << std::endl;
    }
    }

    

#endif
