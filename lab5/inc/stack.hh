#include <stack>
#include <iostream>
#include <cstdlib>
#include "node.hh"
#include "istack.hh"
#ifndef STACK_HH
#define STACK_HH


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
    void push (int max)   {
        node * nowy = new node;

        if (tail==NULL) {
            tail=nowy;
            nowy->prev=NULL;
            nowy->next=NULL;
            nowy->value = 2137;
        }
        else    {
            tail->next=nowy;
            nowy->prev=tail;
            tail=nowy;
            nowy->next=NULL; 
            nowy->value=rand()%10000;
        }

//        nowy->value=rand();
        size++;

    }
    
    void pop(node* tail)   {
        
    std::cout <<"pop test 1 \n";
        if (tail->prev==nullptr && tail->next!=nullptr)  {
            tail->next->prev=nullptr;
            head=tail->next;
        }
     std::cout <<"pop test 2 \n";

        if (tail->prev!=NULL && tail->next!=NULL) {
            tail->prev->next=tail->next;
            tail->next->prev=tail->prev;
        }
    std::cout <<"pop test 3 \n";

        size --;
        delete tail;
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



    node* find_value(int b){
    std::cout << "find test 1";
	    	while(size){
		    	if(tail->value==b){
				    return tail;
    			} 
    			void pop(node* tail);
    		}
    		std::cout <<"brak ";
    		return nullptr;
    	}





};

#endif
