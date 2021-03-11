#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
};
class stk{
private:
    node *top=0;
public:
    stk(){
        top=new node;
        top->data=0;
        top->next=NULL;
        node*t=new node;
        t->data=1;
        t->next=top;
        node*t1=new node;
        t1->data=2;
        t1->next=t;
        top=t1;
    }

    void push(int x){
        node*r=new node;
        if(r==NULL){
            cout<<"stack overflow"<<endl;
        }
        else{

        r=new node;
        r->data=x;
        r->next=top;
        top=r;
        }
    }
    void pop(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
        }
        else{
        node*p=top;
        top=top->next;
        delete p;
        }

    }
    void peek(int x){
        node*p=top;
        for(int i=0 && p;i<x-1;i++){
            p=p->next;
        }
        cout<<p->data<<endl;

    }
    void display(){
        node*p=top;
        while(p){
            cout<<p->data<<endl;
            p=p->next;

        }


    }


};



int main(){
    stk st;
    st.push(3);
    st.push(4);
    st.peek(3);
    st.display();

}
