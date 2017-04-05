#include <iostream>

#ifndef IRUNNABLE_HH
#define IRUNNABLE_HH

template <typename D>
class irunnable 
    : public tab<D>, dodawanie<D>, mnozenie<D>, iclock, stack
    {
    public: 
    void run()  {
     int max;
    double roznica;
    int wybor;    

    std::cout << "Podaj rozmiar tablicy: " ;
    std::cin >> max;
    while (max<11)  {
       std::cout << "Podaj liczbę większą od 10" << std::endl;
       std::cin >> max;
    }
    std::cout << "Podaj algorytm." << std::endl;
    std::cout << "1 - zwiększanie tablicy o 1" << std:: endl;
    std::cout << "2 - zwiększanie tablicy przez mnożenie razy 2" << std::endl;
    std::cout << "3 - Przeszukiwanie stosu \n";
    std::cin >> wybor;


    while (wybor!=1 && wybor!=2 && wybor!=3)  {
        std::cout << "Podaj liczbę 1 lub 2" << std::endl;
        std::cin >> wybor;
    }

//    std::cout.setf(std::ios::fixed);            //liczenie czasu
//    std)::cout.precision(5);
//    clock_t start, koniec;
    iclock mierzenie;
//    mierzenie.czas();
    mierzenie.start=clock();                                                  //dodane 
    
//    if (wybor==1)    {

    switch (wybor)  {

    
    case 1:
    {
        dodawanie<D> obiekt1;               //deklarowanie typu
        obiekt1.testplus1(max);
    break;
    }

   // if (wybor==2)    {
    case 2:
    { 
        mnozenie<D> obiekt1;                //deklarowanie typu
        obiekt1.testrazy2(max);
    break;
    }    

    case 3:
//        int a=r;
        stack obiekt1;
        for (int i=0; i<max;i++)    {
        obiekt1.push(max);
        }
        obiekt1.print();
//        }
    } 

    mierzenie.koniec=clock();
    roznica=(mierzenie.koniec-mierzenie.start)/(double)CLOCKS_PER_SEC;
    std::cout << "Czas wykonywania algorytmu: " << roznica << std::endl;

    } 

    };



#endif
