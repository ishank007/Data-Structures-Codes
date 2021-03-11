#include<iostream>
using namespace std;

class stk{
private:
    int siz;
    int top;
    int *p;
public:
    stk(){
        siz=5;
        top=-1;
        p=new int [siz];
    }
    stk(int siz){
        top=-1;
        this->siz=siz;
        p=new int[this->siz];
    }
    void push(int x){
        if(top==siz-1){
            cout<<"Stack oVerflowed"<<endl;
        }
        else{
            top++;
            p[top]=x;
        }
    }
    int pop(){
        int x=-1;
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        else{
            x=p[top];
            top--;
        }
        return x;
    }

    int peek(int index){
        int x=-1;
        if(top-index+1<0){
            cout<<"Invalid index"<<endl;
        }
        else{
            x=p[top-index+1];

        }
        return x;



    }
    int stacktop(){
        return p[top];


    }
    int Isempty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }

    }
    int IsFull(){
        if(siz-1==top){
            return 1;
        }
        else{
            return 0;
        }
    }
    void display(){
        for(int j=top;j>=0;j--){
            cout<<p[j]<<endl;
        }
    }
    int enqueue(int x,stk &st){
        if(IsFull()==1){
            cout<<"stack is full"<<endl;
        }
        else{
            st.push(x);
        }
        return 0;
    }
    int dequeue(stk &st,stk &st2){
        if(st2.Isempty()==1){
            if(st.Isempty()==1){
                cout<<"Both stack empty"<<endl;
                return 0;
            }
            else{
                while(!st.Isempty()){
                    st2.push(st.stacktop());
                    st.pop();
                }
                int x=st2.stacktop();
                st2.pop();
                return x;
            }
        }
        else{
            int x= st2.stacktop();
            st2.pop();
            return x;

        }
        return 0;
    }





};



int main(){
    stk st(5);
    stk st2(5);
    stk s;
    s.enqueue(1,st);
    s.enqueue(2,st);
    s.enqueue(3,st);
    s.enqueue(4,st);
    s.enqueue(5,st);

    cout<<s.dequeue(st,st2)<<endl;
    cout<<s.dequeue(st,st2)<<endl;
    cout<<s.dequeue(st,st2)<<endl;
    cout<<s.dequeue(st,st2)<<endl;
    cout<<s.dequeue(st,st2)<<endl;




}
