#include<bits/stdc++.h>
#include"chain.h"

using namespace std;

int hash1(int key){
    return key%10;
}
void insert(node *p[],int key){
   int index=hash1(key);
    sortedInsert(&p[index],key);
}



int main(){
    node*HT[10];
    for(int i=0;i<10;i++){
        HT[i]=NULL;
    }
    insert(HT,43);
    insert(HT,12);
    insert(HT,11);
    insert(HT,56);
    insert(HT,112);
    node*temp=lsearch(HT[hash1(11)],11);
    cout<<temp->data<<endl;


}


