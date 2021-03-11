#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    node*prev;
    int data;
    node*next;


};
node*first=NULL;
node*second=0;

void createDL(int a[], int n){
    node*t,*last;
    first=new node;
    first->next=first->prev=NULL;
    first->data=a[0];
    last=first;
    for(int i=1;i<n;i++){
        t=new node;
        t->data=a[i];
        t->next=NULL;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

void display(node*p){

    while(p!=0){
        cout<<p->data<<endl;
        p=p->next;
    }


}
void insertN(int index, int x){
    node*p=first;
    node*t=new node;
    t->data=x;
    t->prev=t->next=NULL;
    if(index==0){
        t->next=first;
        first->prev=t;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++){
           p=p->next;
        }
            t->next=p->next;
            t->prev=p;
            if(p->next)
                p->next->prev=t;
            p->next=t;

    }


}

void deleteDL(int index){
    node*p=first;
    if(index==1){
        first=first->next;
        delete p;
        if(first)
            first->prev=NULL;
    }
    else{
            for(int i=0;i<index-1;i++){
                p=p->next;
            }
            p->prev->next=p->next;
            if(p->next)

                p->next->prev=p->prev;
            delete p;

    }
}
void reverseDL(){
        node*p=first;
        node*temp=0 ;
        while(p){
            temp=p->next;
            p->next=p->prev;
            p->prev=temp;
            p=p->prev;
            if(p && p->next==0 ){
                first=p;
            }
        }



}

void createcircl(){
    node*last=0;
    node*t1=new node;

    second =new node;
    second->data=110;
    second->next=second->prev=NULL;
    last=second;

    node*t=new node;
    t->data=120;
    last->next=t;
    t->prev=last;
    last=t;


    t1->data=130;
    last->next=t1;
    t1->prev=last;
    t1->next=second;
    second->prev=t1;
    last=t1;

}

void displaycircular(){
    node*p=second;
    do{
        cout<<p->data<<endl;
        p=p->next;
    }while(p!=second);

}
void insertDLCir(int index, int x){
    node*p=second;
    node*t=new node;
    t->data=x;
    if(index==0){
        t->next=second;
        second->prev->next=t;
        second->prev=t;
        t->prev=second->prev;

        second=t;

    }
    else{
        for(int i=0;i<index-1;i++){
           p=p->next;
        }
            t->next=p->next;
            t->prev=p;
            if(p->next)
                p->next->prev=t;
            p->next=t;

    }


}











int main(){
    int a[5]={1,2,3,4,5};
    createDL(a,5);
    //insertN(5,55);
    //deleteDL(1);
    //reverseDL();
    //display(first);
    createcircl();
    insertDLCir(0,44);
    displaycircular();
}
