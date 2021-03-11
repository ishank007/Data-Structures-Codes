#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;

};
node*first=NULL;
node*second=NULL;
node*third=NULL;

void create1(){
    node*t,*last;
    first=new node;
    first->data=11;
    first->next=0;
    last=first;
    for(int i=0;i<5;i++){
        t=new node;
        t->data=i;
        t->next=0;
        last->next=t;
        last=t;
    }
}
void create(){
    node*t,*last;
    second=new node;
    second->data=10;
    second->next=0;
    last=second;
    for(int i=110;i<115;i++){
        t=new node;
        t->data=i;
        t->next=0;
        last->next=t;
        last=t;
    }
}
void circular(){
    node*t,*l;
    third=new node;
    third->data=5;
    third->next=0;
    l=third;
    t=new node;
    t->data=4;
    t->next=third;
    l->next=t;


}
void display(node*p){
    while(p!=0){
        cout<<p->data<<endl;
        p=p->next;
    }

}
void concat(node*p,node*q){
    third=p;
    while(p->next!=0){
        p=p->next;
    }
    p->next=q;
    q=0;
}
int LOOPcheck(){
    node*p=first;
    node*q=first;
    while(p && q ){
        p=p->next;
        q=q->next->next;
        if(p==q){
            return -1;
        }

    }
    return 0;
}
void circlurdisplay(node*p){
    do{
    cout<<p->data<<endl;
    p=p->next;
    }while(p!=third);

}
void circlurRdisplay(node*p){
    static int flag=0;
    if(p!=third || flag==0){
        flag=1;
        cout<<p->data<<endl;
        circlurRdisplay(p->next);
    }
    flag=0;

}
void circularInsert(int index,int x){
    node*p=third;
    node*t=new node;
    t->data=x;
    t->next=0;
    if(index==0){
        while(p->next!=third){
            p=p->next;
        }
        t->next=third;
        p->next=t;
        third=t;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;

    }
}

void circularDel(int index){
    node*q=NULL;
    node*p=third;
    if(index==1){
        while(p->next!=third){
            p=p->next;
        }
        p->next=third->next;
        delete third;
        third=p->next;

    }
    else{
        for(int i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        delete p;
    }

}
void midd(){
    node*p=first,*q=first;
    while(p){
        p=p->next;
        if(p)p=p->next;
        if(p)q=q->next;

    }
    cout<<q->data;



}

void mergeLL(){
    third=0;
  node*last=0;
  if(first->data<second->data){
    third=last=first;
    first=first->next;
    last->next=0;
  }
  else {
    third=last=first;
    first=first->next;
    last->next=0;

  }
  while( first && second){
        if(first->data<second->data){
                last->next=first;
                last=first;
                first=first->next;
                last->next=0;

        }
        else{
                last->next=second;
                last=second;
                second=second->next;
                last->next=0;

        }
  }
    if(first){last->next=first;
    }
    else{
            last->next=second;

    }


}


int main(){
    create1();00
    create();
   // display(second);
   // display(first);
   // concat(first,second);
    //display(third);
   cout<<LOOPcheck();
  // circular();
  // circularInsert(1,54);
  //circlurRdisplay(third);
  // circularDel(2);
  // circlurdisplay(third);
  //midd();
  mergeLL();
  display(third);





}
