#include<iostream>
using namespace std;

class stk{
public:
    int siz;
    int top;
    int * p;
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
    int isoperand(char a){
            if(a=='+'|| a== '-'|| a=='*'||a=='/'){
                return 0;
            }
            else{
                return 1;
            }
        }

    int eval_postfix(char *post,stk &st,int siz){
        int r=0;
        int x1=0,x2=0;
       // int *t=new int[siz];
        for(int i=0;post[i]!='\0';i++){
            if(isoperand(post[i])==1){
                st.push(post[i]-'0');
            }
            else{
                x1=st.pop();
                x2=st.pop();
                switch(post[i]){
                    case '+': r=x2+x1; break;
                    case '-': r=x2-x1; break;
                    case '*': r=x2*x1; break;
                    case '/': r=x2/x1; break;

                }
                st.push(r);
            }
        }
        int x=st.stacktop();
        return x;


    }

};



int main(){
    stk st(9);
    cout<<st.eval_postfix("35*62/+4-",st,10);
}

