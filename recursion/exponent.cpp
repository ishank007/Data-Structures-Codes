#include<iostream>
using namespace std;

int exp(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return exp(m,n-1)*m;
    }
}

int main(){
    int x=exp(2,9);
    cout<<x;
}
