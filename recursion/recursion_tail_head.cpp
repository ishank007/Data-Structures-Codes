#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void fun(int k){
    if(k>0){

        fun(k-1);
        cout<<k<<endl;
    }
}


int main(){
    int x=3;
    fun(x);

}
