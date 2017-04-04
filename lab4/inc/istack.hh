#include <stack>
#include <iostream>
#include "node.hh"

#ifndef ISTACK_HH
#define ISTACK_HH


/*struct element
    {
    int dane;
    element *nastepny;
    };

*/

class istack   
    {                            //klasa istack
    node* tail;
    int size;
    std::string what;

public:

    istack();
    virtual void get(int pozycja)=0;        //pobieranie ze stosu
//    virtual int size()=0;                   //rozmiar stosu
    virtual void push(int element)=0;                   //umieszczanie nowego elementu na stosie
    virtual void pop(int pozycja)=0;                    //pobieranie elementu ze stosu
};

    istack::istack()    {
        tail=NULL;
        size=0;
        what="stos";
    }

    void istack::push (int a)   {
        node * nowy = new node;

        if (tail==NULL) {
            tail=nowy;
            nowy->prev=NULL;
            nowy->next=NULL;
        }
        else    {
            tail->next=nowy;
            nowy->prev=tail;
            tail=nowy;
            nowy->next=NULL; 
        }

        nowy->value=a;
        size++;

    }
    
 /*   void istack::pop(node *a)   {
        
        if (a->prev==NULL)  {
            tail=NULL;
        }

        if (a->prev!=NULL && a->next!=NULL) {
            a->prev->netx       
 

    }
*/

/*
    void push(element **S) {
        element *temp = new element;
        std::cin >> temp -> dane;
        temp->nastepny=*S;
        *S=temp;
    }

    int pop(element *S) {
        element *temp;
        if (S!=NULL) {
            return S->dane;
        }
    }

*/
/*
class klasa_czas        //ponieważ czas mierzyłem bez tworzenia dodatkowej klasy czas nie póki co tworzę pustą klasę, na którą później przeniosę mierzenie czasu wykonywania algorytmu
                        
{
};

class stack 
    : public istack, klasa_czas
    {
    public:    
    void get(int pozycja)=0;        //pobieranie ze stosu
    int size()=0;                   //rozmiar stosu
    void push(int element)=0;                   //umieszczanie nowego elementu na stosie
    int pop(int pozycja)=0;                    //pobieranie elementu ze stosu
    

    void push(element **S) {
        element *temp = new element;
        std::cin >> temp -> dane;
        temp->nastepny=*S;
        *S=temp;
    }

    int pop(element *S) {
        element *temp;
        if (S!=NULL) {
            return S->dane;
        }
    }
   

                    

    };*/

//tak, podzielę to wszystko na moduły ale na labach chciałem mieć to w jednym pliku, by mieć wszystko obok i wiedzieć co do czego

/*
irunable

istack czasy push pop size

stack z istack ma brać metody 
mierzenie czasu
istack, by dziedziczył po iclocku

stack wykonaj

dom:
implementacja stos kolejka lista
zmierzenie czasu operacji find ("ma mieć tyletam elementów") na samym końcu i w losowym miejscu

O(n)
=/=O(1)
=/=O(n^2)
10^9
*/


#endif
