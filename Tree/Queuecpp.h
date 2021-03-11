#include<iostream>
using namespace std;

class node{
public:
    node*lchild;
    int data;
    node*rchild;
};


class Queue{
private:
    int Size;
    int Front;
    int rear;
    node **q;
public:
    Queue(){
        Size=10;
        Front=-1;
        rear=-1;
        q=new node*[10];
    }
    Queue(int Size){
        this->Size=Size;
        Front=-1;
        rear=-1;
        q=new node*[Size];
    }
    int isempty(){
        if(Front==rear){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isfull(){
        if(rear==Size-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    void enqueue(node*p){
        if(isfull()){
            cout<<"Queue is Full"<<endl;
        }
        else{
            rear++;
                q[rear]=p;
        }
    }

    node* dequeue(){
       node*x=NULL;
        if(isempty()==1){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            x=q[Front+1];
            Front++;
        }
        return x;

    }



};
