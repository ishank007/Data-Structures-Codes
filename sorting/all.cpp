#include<iostream>
#include<bits/stdc++.h>
class node{
public:
    int data;
    node*next;
};

using namespace std;

int swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return 0;
}


void bubble(int a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

}

void insertion(int a[],int n){
    for(int i=1;i<n;i++){
        int x=a[i];
        int j=i-1;
        while(j>-1 && a[j]>x){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }


}
void selection(int a[], int n){
    int k,i,j;
    for( i=0;i<n;i++){
        for(j=i,k=i;j<n;j++){
            if(a[j]<a[k]){
                k=j;
            }
        }
        swap(a[i],a[k]);
    }

}

int partition(int a[], int l, int h){
    int pivot=a[l];
    int i=l,j=h;
    do{
        do{i++;}while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);
        if(i<j){
            swap(a[i],a[j]);
        }
    }while(i<j);
    swap(a[l],a[j]);
    return j;
}
void quicksort(int a[],int l,int h){
    int j;
    if(l<h){
        j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}

void count(int a[], int n){
        int max=*max_element(a,a+n);
        int arr[max+1];
        for(int i=0;i<n;i++){
            arr[a[i]]++;
        }
        int i=0,j=0;
        while( i < max+1){
            if(arr[i]>0){
                a[j++]=i;
                arr[i]--;

            }
            else{
                i++;
            }
        }
}

int del(node*p){
        int x;
        node*q=NULL;
        q=p->next;
        p=q->next;
            x=q->data;
            delete q;
            return x;
}
void bucket(int a[], int n){
    int max=*max_element(a,a+n);
    node**p;
    p=new node*[max+1];
    for(int i=0;i<max+1;i++){
        p[i]=NULL;
    }
    for(int i=0;i<n;i++){
         node *t ,*last;
         last=p[a[i]];
        t=new node;
        t->data=a[i];
        t->next=NULL;
        if(p[a[i]]==0){
            p[a[i]]->next=t;
        }
        else{
            while(last->next!=0){
                last=last->next;
            }
            last->next=t;
        }
    }
    int i=0,j=0;
    while(i<max+1){
        while(p[i]!=0){
            node*q=p[i];
            q=p[i]->next;
            p[i]=q->next;
            a[j++]=q->data;
        }
        i++;
    }
}

int main(){
    int a[]={1,2,46,12,97,11};
    int n=sizeof(a)/sizeof(a[0]);
    bucket(a,n);
     for(int j=0;j<n;j++){
        cout<<a[j]<<endl;
    }
}
