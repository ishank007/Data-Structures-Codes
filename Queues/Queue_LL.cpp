#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node*next;

};
class Que{
private:
    node*Front=0;
    node*rear=0;
public:
    Que(){
        node*t=new node;
        t->data=1;
        t->next=NULL;
        Front=rear=t;
        node*t1=new node;
        t1->data=2;
        t1->next=NULL;
        t->next=t1;
        rear=t1;
        node*t2=new node;
        t2->data=3;
        t2->next=NULL;
        t1->next=t2;
        rear=t2;
    }
    int isfull(){
        node*x=new node;
        if(x==NULL){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isempty(){
        if(Front==NULL){
            return 1;
        }
        else{ return 0;}

    }

    void enqueue(int x){
        node*t=new node;
        if(t==NULL){
            cout<<"Queue is full"<<endl;
        }
        else{
            t->data=x;
            t->next=NULL;
            if(Front==NULL){Front=rear=t;}
            else{
                rear->next=t;
                rear=t;
            }
        }
    }
    void Dequeue(){
        node*p=new node;
        if(Front==NULL){
            cout<<"Queue is empty"<<endl;
        }
        else{
            p=Front;
            Front=Front->next;
            delete p;
        }
    }
    void display(){
        node*p=Front;
        do{
                cout<<p->data<<endl;
                p=p->next;

        }while(p!=0);


    }

};



int main(){
    Que q;
    q.enqueue(12);
    q.Dequeue();
    q.display();

    //phla case kaa dhyan rkhna hai + empty and full+ enque deque
}
