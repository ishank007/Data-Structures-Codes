#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
};

node* lsearch(node*p, int x){
        while(p!=0){
            if(p->data==x){
                return p;
            }
            p=p->next;
        }
        return NULL;

}
void sortedInsert(node**H, int x){
    node*p,*q=NULL;
    p=*H;
    node *t=new node;
    t->data=x;
    t->next=0;
    if(*H==NULL){
        *H=t;
    }
    else{
        while(p && p->data<x){
            p=p->next;
            q=p;
        }
        if(p==*H){
           *H=t;
        }
        else{
            t->next=q->next;
           q->next=t;
        }
    }

}
