#include<iostream>
using namespace std;

int fibR(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibR(n-2)+fibR(n-1);
    }
}
//This is written using mathematical fn only like the we make recursive expression normally


//this funtion is memoization method of dynamic programming
int arr[6]={-1};
int fibM(int n){
    if(n<=1){
        arr[n]=n;
        return n;
    }
    else{
        if(arr[n-2]==-1){
            arr[n-2]=fibM(n-2);
        }
        if(arr[n-1]=-1){
            arr[n-1]=fibM(n-1);
        }
        arr[n]=fibM(n-2)+fibM(n-1);
        return fibM(n-2)+fibM(n-1);
    }
}
int main(){
    cout<<fibM(5);
}
