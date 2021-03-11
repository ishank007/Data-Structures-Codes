#include<iostream>
using namespace std;

class node{
public:
    node*lchild;
    int data;
    node*rchild;
    int height;

};
node*root=NULL;
int NodeHeight(node*p){
    int hl,hr;
    hl=p&&p->lchild?p->lchild->height:0;
    hr=p&&p->rchild?p->rchild->height:0;
    int d=hl>hr?hl+1:hr+1;

    return d;

}
int balancef(node*p){
   int hl=p&&p->lchild?p->lchild->height:0;
   int  hr=p&&p->rchild?p->rchild->height:0;
    return hl-hr;

}
node* LLrotation(node*p){
    node*pl;
    node*plr;
    pl->rchild=p;
    p->lchild=plr;
    pl->height=NodeHeight(pl);
    p->height=NodeHeight(p);
    if(root=p){
        root=pl;
    }
    return pl;

}
node *LRrotation(node*p){
    node*pl,*plr;
    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;

    plr->lchild=pl;
    plr->rchild=p;
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);
    plr->height=NodeHeight(plr);
    if(root=p){
        root=plr;
    }
    return plr;

}
node * rinsert(node*p,int x){
    if(p==NULL){
        node*t=new node;
        t->lchild=t->rchild=NULL;
        t->data=x;
        t->height=1;
        return t;
    }
    else{
        if(p->data==x){
            return p;
        }
        else if(p->data>x){
            p->lchild=rinsert(p->lchild,x);
        }
        else if(p->data<x){
            p->rchild=rinsert(p->rchild,x);
        }
    }
    p->height=NodeHeight(p);
    if(balancef(p)==2 && balancef(p->lchild)==1){
        return LLrotation(p);
    }
    else if(balancef(p)==2 && balancef(p->rchild)==-1){
        return LRrotation(p);
    }
    return p;

}

int main(){
    root=rinsert(root,5);
    rinsert(root,2);
    rinsert(root,4);


}
