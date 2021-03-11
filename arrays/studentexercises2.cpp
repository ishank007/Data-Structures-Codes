#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sumofpair(int sum,int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }

}
void sop2(int sum,int a[], int n){
    int maxa=*max_element(a,a+5);
    int H[maxa]={0};
    for(int i=0;i<n;i++){
        if(H[n-a[i]]!=0){
            cout<<a[i]<<" "<<n-a[i]<<endl;
        }
        else{
            H[a[i]]++;
        }
    }

}
void sop3(int sum,int a[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]+a[j]==n){
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            j--;
        }
        else if(a[i]+a[j]>n){
            j--;
        }
        else{
            i++;
        }
    }

}
void max_min(int a[], int n){
    int max1=a[0];
    int min1=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min1){
            min1=a[i];
        }
        else if(a[i]>max1){
            max1=a[i];
        }
    }
    cout<<min1<<" "<<max1;


}
int main(){
    int a[5]={112,2,3,4,4};
    sop3(5,a,5);
    max_min(a,5);
    //normal, hashign method for unsrted and 1 more for soted
}
