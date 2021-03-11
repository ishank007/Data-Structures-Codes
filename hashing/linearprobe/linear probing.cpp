#include<bits/stdc++.h>
#define size 10
using namespace std;

int Hash(int key){
    return key%size;
}
int probe(int a[], int x){
    int index=Hash(x);
    int i=0;
    while(a[(index+i)%size]!=0){
        i++;
    }
    return (index+i)%size;
}
int insert(int HT[], int x){
    int index=Hash(x);
    if(HT[index]!=0){
        index=probe(HT,x);
    }
    HT[index]=x;
}
int search(int a[], int x){
    int index=Hash(x);
    int i=0;
    while(a[(index+i)%size]!=x){
        i++;
    }
    return (index+i)%size;

}



int main(){
    int HT[10]={0};
    insert(HT,12);
    insert(HT,121);
    insert(HT,17);
    insert(HT,21);
    cout<<search(HT,12)<<endl;
    cout<<search(HT,17)<<endl;


}