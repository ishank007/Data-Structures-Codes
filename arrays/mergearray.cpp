#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mergearray(int a[], int size1, int b[], int size2){
    int *p;
    p=new int [size1+size2];
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
            if(a[i]>b[j]){
                p[k++]=b[j++];
            }
            else {
                p[k++]=a[i++];
            }
    }
    for(;i<size1;i++){p[k++]=a[i];}
    for(;j<size2;j++){p[k++]=b[j];}

    for(int i=0;i<size1+size2;i++){
        cout<<p[i]<<endl;
    }

}


int main(){
    int a[]={1,2,4,5,7,8};
    int b[]={3,6,10,12,20};
    mergearray(a,6,b,5);


}
