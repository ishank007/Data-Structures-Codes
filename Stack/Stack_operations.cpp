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
    void Isempty(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
        }
        else{
            cout<<"stack have more space "<<endl;
        }

    }
    void IsFull(){
        if(siz-1==top){
            cout<<"stack overflowed"<<endl;
        }
        else{
            cout<<"stack have more space" <<endl;
        }
    }
    void display(){
        for(int j=top;j>=0;j--){
            cout<<p[j]<<endl;
        }



    }




};



int main(){
    stk st(6);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
   cout<< st.peek(4)<<endl;
    st.display();


}
