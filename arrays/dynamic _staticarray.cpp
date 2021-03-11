#include<iostream>
using namespace std;

int main(){
    int *p=new int [5];
    for(int i=0;i<5;i++){
        p[i]=i;
    }
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    //this will print value of index



    //NOw lets increase the size of array to 10
    int *q;
    q=new int [10];
    for(int i=0;i<5;i++){
       q[i]=p[i];
    }
    delete []p;
    p=q;
    q=0;
    for(int i=0;i<10;i++){
        cout<<p[i]<<endl;
    }
}
