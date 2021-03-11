#ifndef queu
#define queu

#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node*next;

};
node*Front=NULL ;
node*rear=NULL;
int isfull(){
        node*x=new node;
        if(x==NULL){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isempty(){
        if(Front==NULL){
            return 1;
        }
        else{ return 0;}

    }

    void enqueue(int x){
        node*t=new node;
        if(t==NULL){
            cout<<"Queue is full"<<endl;
        }
        else{
            t->data=x;
            t->next=NULL;
            if(Front==NULL){Front=rear=t;}
            else{
                rear->next=t;
                rear=t;
            }
        }
    }
    int  Dequeue(){
        int t=-1;
        node*p=new node;
        if(Front==NULL){
            return t;
        }
        else{
            int t=Front->data;
            p=Front;
            Front=Front->next;
            delete p;
            return t;
            
        }
    }
    void display(){
        node*p=Front;
        do{
                cout<<p->data<<endl;
                p=p->next;

        }while(p!=0);


    }
#endif 
#include<iostream>
using namespace std;

void bfs(int g[][7],int start,int n){
    int visited[7]={0};
    cout<<start<<endl;
    visited[start]=1;
    enqueue(start);
    while(!isempty){
        int q=Dequeue();
        for(int j=1;j<n;j++){
            if(g[q][j]==1 && visited[j]==0){
                cout<<j<<endl;
                visited[j]=1;
                enqueue(j);
            }
        }
    }
}

void dfs(int g[][7],int start, int n){
    int static visited[7]={0};
    if(visited[start]==0){
        cout<<start<<endl;
        visited[start]=1;
        for(int j=1;j<n;j++){
            if(g[start][j]==1 && visited[j]==0){
                dfs(g,j,n);
            }
        }
    }
}

int main(){
    int G[7][7]={{0,0,0,0,0,0,0},
                {0,0,1,1,0,0,0},
                {0,1,0,0,1,0,0},
                {0,1,0,0,1,0,0},
                {0,0,1,1,0,1,1},
                {0,0,0,0,1,0,0},
                {0,0,0,0,1,0,0}};
bfs(G,1,7);
return 0;
}