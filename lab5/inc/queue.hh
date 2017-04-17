#include <cstdlib>
#include "node.hh"
#include "iqueue.hh"

#ifndef QUEUE_HH
#define QUEUE_HH

class queue
    : public iqueue
    {
public: 
    node* head;
    node* tail;
    int size;
    std::string what;

    queue() {
//    head=NULL;
    tail=NULL;
    size=0;
    what="kolejka";
    }

    void enqueue(int b)   {
        node * nowy = new node;

           
        if (b==1)    {


            if (tail==NULL)  {
                tail=nowy;
                nowy->prev=NULL;
                nowy->next=NULL;
                nowy->value=rand()%10000;
            }
            else    {
                tail->next=nowy;
                nowy->prev=tail;
                tail=nowy;
                nowy->next=NULL;
                nowy->value=rand()%10000;        
            }
        }
       

        if (b==2)    {
    
                tail->next=nowy;
                nowy->prev=tail;
                tail=nowy;
                nowy->next=NULL;
                nowy->value=2137;
    
            }
      
        size++;

    }

    void print()    {
        node* tmp;
        tmp=tail;
        for (int i=size;i>0;i--)    {
            std::cout << tmp->value << "\n";
            tmp=tmp->prev;    
        } 

    }    


    void remove()   {
        if (head->prev==NULL && head->next!=NULL)    {
            head->next->prev=NULL;
            head=head->next;
        }

        if (head->prev!=NULL && head->next!=NULL) {
            head->prev->next=head->next;
            head->next->prev=head->prev;
        }

        if (head->next==NULL && head->prev!=NULL) {
            head->prev->next=nullptr;
            tail=head->prev;
        }
    size--;
    delete head;
    }

    node* find_value(int b)  {
        while (size)    {
            if (head->value==b) {
                return head;
            }
            remove(); 
            }
        return nullptr;
       

    }



    };

#endif
