#include<iostream>
using namespace std;

class node{
public:
    node*lchild;
    int data;
    node*rchild;

};
node*root=NULL;
node *RInsert(struct node *p,int key){
 node *t=NULL;
if(p==NULL){
    t=new node;
    t->data=key;
    t->lchild=t->rchild=NULL;
    return t;
    }
if(key < p->data)
    p->lchild=RInsert(p->lchild,key);
else if(key > p->data)
    p->rchild=RInsert(p->rchild,key);
return p;
}

node*insert(int key){
    node*r=NULL;
    node* t;

    if(root==NULL){
        t=new node;
        t->lchild=NULL;
        t->rchild=NULL;
        t->data=key;
        root=t;
    }
    else{
    node*p=root;
    while(p!=0){
            r=p;
        if(p->data==key){
            return p;
        }
        else if(p->data<key){
            p=p->rchild;
        }
        else{
            p=p->lchild;
        }
    }
    node* t=new node;
    t->lchild=t->rchild=NULL;
    t->data=key;
        if(r->data>key){r->lchild=t;}
        else{
            r->rchild=t;
        }
    }

}
void inorder(node*t){
    if(t){
        inorder(t->lchild);
        cout<<t->data<<endl;
        inorder(t->rchild);
    }

}
int search(node*p,int key){
    while(p){
        if(p->data==key){
            return 1;
        }
        else if(p->data>key){
            p=p->lchild;
        }
        else{
            p=p->rchild;
        }
    }

    return 0;

}
int height(node*p){
    int x,y;
    if(p==0){return 0;}
    x=height(p->lchild);
    y=height(p->rchild);
    return x>y?x+1:y+1;
}

node * Inpre(node*p){
    while(p && p->rchild){
        p=p->rchild;
    }
    return p;
}

node * InSucc(node*p){
    while(p && p->lchild){
        p=p->lchild;
    }
    return p;
}

node *Delete(node*p,int key){
    node*q=0;
    if(p==NULL){
        return NULL;
    }
    if(p->lchild==NULL && p->rchild==NULL){
        if(root==p){
            root=NULL;
        }
        delete p;
        return NULL;
    }
    if(p->data<key){
        p->rchild=Delete(p->rchild,key);
    }
    else if(p->data>key){
        p->lchild=Delete(p->lchild,key);
    }
    else{
        if(height(p->lchild)>height(p->rchild)){
           q=Inpre(p->lchild);
           p->data=q->data;
           p->lchild=Delete(p->lchild,q->data);

        }
        else{
            q=InSucc(p->rchild);
            p->data=q->data;
            p->rchild=Delete(p->rchild,q->data);
        }
    }
    return p;

}

int main(){
    root=RInsert(root,4);
    RInsert(root,6);
    RInsert(root,11);
    insert(1);
    RInsert(root,55);
    Delete(root,11);
    search(root,11);
    inorder(root);



}
