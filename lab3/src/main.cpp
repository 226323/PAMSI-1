#include <iostream>
#include <cstdlib>

#include "klasa.hh"
#include "plus1.hh"

using namespace std;

int main() {

    double roznica;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(5);
    clock_t start, koniec;
    start=clock();
        dodawanie<float> obiekt1;
        obiekt1.testplus1();

    koniec=clock();
    roznica=(koniec-start)/(double)CLOCKS_PER_SEC;
    std::cout << "Czas wykonywania algorytmu: " << roznica << std::endl;

    return 0;

}
