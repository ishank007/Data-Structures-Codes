#include<iostream>
using namespace std;

void insert(int a[],int  n){
    int i=n;
    int tmp=a[i];
    while(i>1 && tmp >a[i/2]){
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=tmp;
}

int delete1(int a[],int n){
    int x=a[n];
    int val=a[1];
    a[1]=x;
    a[n]=val;
    int i=1;
    int j=2*i;
    while(j<n-1){
        if(a[j+1]>a[j]){
            j=j+1;
        }
        if(a[i]<a[j]){
            int temp;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i=j;
            j=2*j;

        }
        else {break;}
    }
    return val;


}


int main(){
    int a[]={0,5,10,30,20,35,40,15};
    for(int i=1;i<=7;i++){
        insert(a,i);
    }

    for(int j=7;j>=1;j--){
        delete1(a,j);
    }
    for(int j=1;j<=7;j++){
        cout<<a[j]<<endl;
    }


}
