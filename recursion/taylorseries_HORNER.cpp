#include<iostream>
using namespace std;

//This is a tail recursive and hence can easily converted into loop and vice versa
double e1(double x,double n){
    static double s=1;
    if(n==0){
        return s;
    }
    else{
        s=1+s*x/n;
        return e1(x,n-1);
    }

}
double e(double x,double n){
static double s=1;
for(;n>0;n--){
    s=1+s*(x/n);
}
return s;
}

int main(){
    cout<<e(3,10000);

}

