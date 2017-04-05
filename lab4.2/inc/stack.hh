#include <stack>
#include <iostream>
#include "node.hh"
#include "istack.hh"

#ifndef STACK_HH
#define STACK_HH


/*struct element
    {
    int dane;
    element *nastepny;
    };

*/
class stack   
    : public istack
    {      
public:

    node* tail;
    node* head;
    int size;
    std::string what;


    stack()    {
        tail=NULL;
        size=0;
        what="stos";
    }

    void push (int a)   {
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
    
    void pop(node *a)   {
        
        if (a->prev==nullptr && a->next!=nullptr)  {
            a->next->prev=nullptr;
            head=a->next;
        }
   
        if (a->prev!=NULL && a->next!=NULL) {
            a->prev->next=a->next;
            a->next->prev=a->prev;
        }

        size --;
        delete a;
    }

    void print()    {
        node* tmp;
        tmp=tail;

        for (int i=size;i>0; i--)   {
            std::cout << tmp-> value << "\n";
            tmp=tmp->prev;
        }
    }

    int get_size()  {
        return size;
    }




};

#endif
