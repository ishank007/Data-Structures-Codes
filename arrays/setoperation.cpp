#include<iostream>
using namespace std;

void union1(int a[], int b[], int c[]){
    int i=0,j=0,k=0;
    int size1=5;
    int size2=5;
    while(i<size1 && j<size2){
        if(a[i]>b[j]){
            c[k++]=b[j++];
        }
        else if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=a[i++];
            j++;
        }
    }
    for(;i<size1;i++){c[k++]=a[i];}
    for(;j<size2;j++){c[k++]=b[j];}
}
void inter(int a[], int b[], int c[]){
    int i=0,j=0,k=0;
    int size1=5;
    int size2=5;
    while(i<size1 && j<size2){
        if(a[i]>b[j]){
            j++;
        }
        else if( a[i]<b[j]){
            i++;
        }
        else if(a[i]==b[j]){
            c[k++]=a[i++];
            j++;
        }
    }
}
void difference(int a[], int b[], int c[]){
    int i=0,j=0,k=0;
    int size1=5;
    int size2=5;
    while(i<size1 && j<size2){
         if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else if(a[i]>b[j]){
            j++;
        }
        else {
            i++;
            j++;
        }
    }
    for(;i<size1;i++){c[k++]=a[i];}

}

int main(){
    int a[]={1,3,5,6,7};
    int b[]={2,3,5,12,13};
    int c[10]={0};
    difference(a,b,c);
    for(int i=0;i<10;i++){
        cout<<c[i]<<endl;
    }

}
