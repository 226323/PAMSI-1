#include<iostream>

using namespace std;

class tablica
{

    private:

    int** tworzenie_tablicy(int , int );
 /*   {
    //    int wymiar_x, wymiar_y;
        int ** tablica;

        for (int i=0;i<wymiar_x;i++)
            tablica[i] = new int [wymiar_x];
        return tablica; 
    };*/



    void usuwanie_tablicy(int** tablica, int wymiar_x);
/*    {
    for (int i=0; i<wymiar_x; i++)
        delete [] tablica;
    };
*/

    public:
        
    void wypelnianie_tablicy(int** tablica, int wymiar_x, int wymiar_y);
    /*{
        for (int i=0; i<wymiar_x; i++){
            for (int j=0; j<wymiar_y; j++)
                tablica[i][j]=rand() % 10;
        }
    }*/

    void wyswietlanie_tablicy(int** tablica, int wymiar_x, int wymiar_y);
    /*{
        for (int i=0; i<wymiar_x; i++) {
            for (int j=0; j<wymiar_y; j++) {
                cout << tablica [i][j] << " ";
            }
        }
    }*/

};

    int** tablica::tworzenie_tablicy(int wymiar_x, int wymiar_y)
    {
    int x, y;
    // int wymiar_x, wymiar_y;
        int ** tablica;
 
         for (int i=0;i<wymiar_x;i++)
             tablica[i] = new int [wymiar_x];
         return tablica; 
    }
/*
    cout << "Podaj wymiary tablicy " << endl;
    cin >> x >> y;
    
    }
*/
int main()
{
    int x, y;
    tablica wyswietl;
//    cout << tablica::wyswietlanie_tablicy(x,y);


}
