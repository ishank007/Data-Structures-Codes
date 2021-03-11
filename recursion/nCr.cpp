#include<iostream>
using namespace std;

//This is recursive function made using pascal triangle
int combR(int n, int r){
    if(r==0 || n==r){
        return 1;
    }
    else{
        return combR(n-1,r-1)+combR(n-1,r);
    }
}


//This is iterative method
int fact(int n){
    if(n==1){
        return n;
    }
    else{
        return fact(n-1)*n;
    }

}

int combI(int n, int r){
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return t1/(t2*t3);

}

int main(){
    cout<<combR(5,3);
}
