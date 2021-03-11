#include<iostream>
using namespace std;

class stk{
public:
    int siz;
    int top;
    char * p;
    stk(){
        siz=5;
        top=-1;
        p=new char [siz];
    }
    stk(int siz){
        top=-1;
        this->siz=siz;
        p=new char[this->siz];
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
    int balanced(char *exp,stk &st ){
        int f=0;
        for(int i=0;exp[i]!='\0';i++){
            if(exp[i]=='('){
                st.push('(');
               }
            else if( exp[i]==')'){
                if(Isempty()){
                   return -1;

                }
                else{
                    st.pop();
                }
            }
        }
        if(Isempty()){
          return 1;
        }

        else{
            return 0;
        }


        }

        void balancednew(char * exp,stk &st){
            int f=0;
            int x=0;
            for(int i=0;exp[i]!='\0';i++){
                if(exp[i]==40){     //(
                    st.push(40);
                }
                else if(exp[i]==91){        //[
                    st.push(91);
                }
                else if(exp[i]==123){       //{
                    st.push(123);
                }
                else if(exp[i]==93){
                    x=st.pop();
                    if(x==91);
                    else{f=1;break;}
                }
                else if(exp[i]==125){
                     x=st.pop();
                    if(x==123);
                    else{f=1;break;}
                }
                else if(exp[i]==41){
                    x=st.pop();
                    if(x==40);
                    else{f=1;break;}
                }
              }
            if(f==1){cout<<"NOt macthed"<<endl;}
            else{cout<<"string matched"<<endl;}
        }

         int isoperand(char a){
            if(a=='+'|| a== '-'|| a=='*'||a=='/'){
                return 0;
            }
            else{
                return 1;
            }
        }

        int pre(char a){
            if(a=='+'|| a=='-'){
                return 1;
            }
            else if( a=='/' || a=='*'){
                return 2;
            }
            else{
                return 0;
            }


        }

        char * inf_post(char *exp, stk &st, int siz){

            char*postfix=new char(siz);
            int i=0,j=0;
            while(exp[i]!='\0'){
                    if(isoperand(exp[i])==1){
                        postfix[j++]=exp[i++];
                    }
                    else{
                        if(pre(exp[i])>pre(st.stacktop())){
                                st.push(exp[i++]);

                        }
                        else{
                            postfix[j++]=st.pop();
                        }

                    }

            }
                while(!Isempty()){
                        postfix[j++]=st.pop();
                    }
                    postfix[j]='\0';
                    return postfix;


        }

};



int main(){
    stk st(9);
    cout<<st.inf_post("a+b*c-d/e",st,10);
}

