#include<iostream>
#include "Queuecpp.h"
#include "stackcpp.h"
using namespace std;

class Tree{
private:
    node*root;
public:
    tree(){
        root=NULL;
    }
    void createTree();
    void inorder(node*p);
    int Height(node *p);
    void Iinorder(node*p);
    void inorder(){return inorder(root);}
    void Iinorder(){return Iinorder(root);}
};
    void Tree::createTree(){
        node*p;
        node*t=0;
        Queue q(100);
        int x;
        cout<<"Enter the value of root"<<endl;
        cin>>x;
        root=new node;
        root->data=x;
        root->lchild=root->rchild=NULL;
        q.enqueue(root);
        while(!q.isempty()){
            p=q.dequeue();
            cout<<"Enter lchild"<<endl;
            cin>>x;
            if(x!=-1){
                t=new node;
                t->data=x;
                t->lchild=t->rchild=NULL;
                p->lchild=t;
                q.enqueue(t);
            }
            cout<<"Enter rchild"<<endl;
            cin>>x;
            if(x!=-1){
                t=new node;
                t->data=x;
                t->lchild=t->rchild=NULL;
                p->rchild=t;
                q.enqueue(t);
            }
        }

    }

    void Tree::inorder(node*p){
        if(p!=0){
            inorder(p->lchild);
            cout<<p->data<<endl;
            inorder(p->rchild);
        }

    }

    int Tree::Height(node*p){
        int x=0,y=0;
        if(p!=0){
            x=Height(p->lchild);
            y=Height(p->rchild);
            return x+y+1;
        }
        return 0;
    }
    void Tree::Iinorder(node*p){
        stk st;
        while(p!=0 || !st.Isempty()){
            if(p!=0){
                st.push(p);
                p=p->lchild;
            }
            else{
                p=st.pop();
                cout<<p->data<<endl;
                p=p->rchild;
            }
        }

    }

int main(){
    Tree t;
    t.createTree();
    t.Iinorder();

}
