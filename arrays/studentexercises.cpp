#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void missing1(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    int k=a[n-1];// last element is used to calculate the sum of n elements
    int s=(k*(k+1))/2;
    cout<<s-sum<<"is the missing element"<<endl;


}
void missingN(int a[], int n){
    int l=a[0];
    int h=a[n-1];
    int diff=l;
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]-i!=diff){
            while(a[i]-i>diff){
                cout<<"missing element is "<<i+diff<<endl;
                diff++;
            }
        }
    }

}
void Unsortedmiss(int a[], int n){
    //take l and h as lowest and highest element of the array
    int l=*min_element(a,a+n);
    int h=*max_element(a,a+n);
    int H[h]={0};
    for(int i=0;i<n;i++){
        H[a[i]]++;
    }
    for(int i=l;i<h;i++){
            if(H[i]==0){
                cout<<i<<"is the missing element"<<endl;
            }
    }

}

int main(){
    int a[15]={1,2,4,5,6,7,8,9,11,12,15,16,17,18,19};
    Unsortedmiss(a,15);
}
