#include<iostream>
using namespace std;

class stk{
private:
    int siz;
    int top;
    node **p;
public:
    stk(){
        siz=10;
        top=-1;
        p=new node*[siz];
    }
    stk(int siz){
        top=-1;
        this->siz=siz;
        p=new node*[this->siz];
    }
    void  push(node* x){
        if(top==siz-1){

        }
        else{
            top++;
            p[top]=x;
        }
    }
    node* pop(){
        node*x=NULL;
        if(top==-1){

            return 0;
        }
        else{
            x=p[top];
            top--;
        }
        return x;
    }

    node* stacktop(){
        return p[top];


    }
    int  Isempty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }

    }
    int  IsFull(){
        if(siz-1==top){
            return 1;
        }
        else{
            return 0;
        }
    }





};


