#include<iostream>
using namespace std;

class node{
    node*lchild;
    int data;
    node*rchild;

};
class Tree{
    node* root;
public:
    void create(){
    node *t;
    node*p;
    root=new node;
    cout<<"Enter root value"<<endl;
    int x;
    cin>>x;
    root->data=x;
    root->lchild=root->rchild=NULL;
    cout<<"Enter the number of node"<<endl;
    int v;
    cin>>v;
    int arr[v];
    arr[0]=&root;
    for(int i=0;i<v;){
        p=arr[i];
        cout<<"Enter lchild"<<endl;
        int l;
        cin>>l;
        if(l!=-1){
            t=new node;
            t->data=l;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            arr[i]=&t;
            i++;
        }
        cout<<"Enter rchild"<<endl;
        int r;
        cin>>r;
        if(r!=-1){
            t=new node;
            t->data=r;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            arr[i]=&t;
            i++;
        }
    }


    }
};


int main(){
    Tree t;
    t.create();


}
