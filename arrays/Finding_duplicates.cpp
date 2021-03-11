#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void duplicate(int a[], int n){
    int last=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1] && a[i]!=last){
            cout<<a[i]<<"is the duplicate element"<<endl;
            last=a[i];
        }
    }

}
void duplicatewithcount(int a[], int n){
    int j=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            j=i+1;
            while(a[i]==a[j]){
                j++;
            }
            cout<<a[i]<<"is repeating"<<j-i<<" times"<<endl;
            i=j-1;
        }
    }
}

void Duplicate_HASH(int a[], int n){
    int l=*min_element(a,a+n);
    int h=*max_element(a,a+n);
    int H[h]={0};
    for(int i=0;i<n;i++){
        H[a[i]]++;
    }
    for(int i=l;i<h;i++){
        if(H[i]>1){
            cout<<i<<"is repeating"<<H[i]<<" times"<<endl;
        }
    }
}

void unsorted(int a[], int n){
    for(int i=0;i<n;i++){
        int coutn=1;
        if(a[i]!=-1){
            for(int j=i+1;j<n;j++){

                    if(a[i]==a[j]){
                        coutn+=1;
                        a[j]=-1;
                    }
            }
            if(coutn>1){
                cout<<a[i]<<"is repeating"<<coutn<<" times"<<endl;
            }
        }
    }
}



int main(){
    int a[10]={3,6,8,8,10,12,15,15,15,20};
    //duplicate(a,10);    //for sorted array
    //duplicatewithcount(a,10);       //for sorted array
    //Duplicate_HASH(a,10);
    unsorted(a,10);
    //hashing method can be used for both sort or unsorted do the analsyisy
}
