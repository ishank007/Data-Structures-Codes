#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
};

class LL{
private:
    node*first;
public:
    LL(){
        first=NULL;
                    //Default COnst
    }
    LL(int a[], int n){            //Param Const
        node *t,*last;
        first=new node;
        first->data=a[0];
        first->next=NULL;
        last=first;

        for(int i=1;i<n;i++){
            t=new node;
            t->data=a[i];
            t->next=NULL;
            last->next=t;
            last=t;
        }

    }
    node* point_to_first(){
        return first;
    }
    ~LL(){};                //DEstr.

    void display(){
        node*p=first;
        while(p!=NULL){
            cout<<p->data<<endl;
            p=p->next;
        }
    }
    void RDisplay(node *p){
        if(p!=0){
            cout<<p->data<<endl;
            RDisplay(p->next);
        }
    }
    int  countnode(){
        node*p=first;
        int count1=0;
        while(p!=0){
            p=p->next;
            count1++;
        }
        return count1;

    }
    int countdata(){
        node *p=first;
        int sum=0;
        while(p!=0){
            sum=sum+(p->data);
            p=p->next;
        }
        return sum;
    }
    int maxidata(){
        node *p=first;
        int maxi=INT32_MIN;
        while(p!=0){
            if(p->data>maxi){
                maxi=p->data;
                p=p->next;
            }
            else{
                p=p->next;
            }
        }
        return maxi;
    }
    void lsearch(int x){
        node*p=first;
        int f=0;
        while(p!=0){
            if(p->data==x){
                cout<<"found"<<endl;
                f=1;
            }
            p=p->next;
        }
        if(f==0){
            cout<<"NOT FOUND"<<endl;
        }


    }
    void Improvedlsearch(int x){
        node*p=first;
        node *q=NULL;
        int f=0;
        while(p!=0){
            if(p->data==x){
                q->next=p->next;
                p->next=first;
                first=p;
                cout<<"found"<<endl;
                f=1;
            }
            q=p;
            p=p->next;
        }
        if(f==0){
            cout<<"NOT FOUND"<<endl;
        }
    }
    void insertnode(int index, int ele){
        node *t,*p;
        if(index==0){
            t=new node;
            t->data=ele;
            t->next=first;
            first=t;
        }
        else if (index >0){
            p=first;
            t=new node;
            t->data=ele;
            for(int i=0;i<index-1 && p ;i++){
                p=p->next;
            }
            t->next=p->next;
            p->next=t;
        }


    }
    void insertlast(int ele){
        node *t ,*last;
        t=new node;
        t->data=ele;
        t->next=NULL;
        if(first==0){
            first=t;
            last=t;
        }
        else{
            last->next=t;
            last=t;
        }
    }
    void sortedInsert(int ele){
        node*p,*q,*t;
        p=first;
        q=NULL;
        t=new node;
        t->data=ele;
        if(ele<first->data){
            t->next=first;
            first=t;
        }
        else{
            while( p && ele>p->data ){
                q=p;
                p=p->next;

            }
            q->next=t;
            t->next=p;
        }
    }
    int deletenode(int ele){
        int x;
        node*p,*q;
        p=first;
        q=NULL;
        if(ele==1){
            first=first->next;
            x=p->data;
            delete p;
            return x;
        }
        else{
            for(int j=0;j<ele-1;j++){
                q=p;
                p=p->next;
            }
            q->next=p->next;
            x=p->data;
            delete p;
            return x;

        }


    }
    void checksort(){
        node*p,*q;
        q=first;
        p=first->next;
        int flag=0;
        while(p!=NULL){
            if(p->data<q->data){
                cout<<"NOT SORTED" <<endl;
                flag=1;
                break;
            }
            q=p;
            p=p->next;
        }
        if(flag==0){
            cout<<"SORTED LL"<<endl;
        }



    }
    void duplicate(){
        node*p,*q;
        p=first->next;
        q=first;
        int f=0;
        while(p!=0){

            if(p->data!=q->data){
                q=p;
                p=p->next;
            }

            else{
                q->next=p->next;
                cout<<"Duplicate found"<<endl;
                cout<<p->data<<endl;
                delete p;
                p=q->next;
                f=1;
            }


        }
        if(f==0){
            cout<<"NO Duplicate"<<endl;
        }
    }
    void reverseLL(){
        int arr[100];
        node*p;
        p=first;
        int i=0;
        while(p!=0){
            arr[i]=p->data;
            p=p->next;
            i++;
        }

        p=first;
        while(p!=0){
            i--;
            p->data=arr[i];
            p=p->next;
        }
    }
    void  reverselink(){
        node*p,*q,*r;
        p=first;
        q=r=NULL;
        while(p!=0){
            r=q;
            q=p;
            p=p->next;
            q->next=r;

        }
        first=q;


    }
    void recRev(node*p,node*q){
        if(p!=0){
            recRev(p->next,p);
            p->next=q;
        }
        else{
            first=q;
        }


    }


};

int main(){
    int a[]={1,2,3,4,5};
    LL l(a,5);
    //l.display();
    //cout<<l.countnode();
    //cout<<l.countdata();
    //cout<<l.maxidata();
    //l.Improvedlsearch(4);
    //l.insertnode(0) ;       //give the param after which you want to insert a value
    //l.display();
    //LL k(a,5);

   // k.RDisplay(f);
   // k.insertnode(0,5);      //This is must then next insert must be valid
   // k.insertnode(1,3);
   // k.insertnode(0,17);
   // k.insertnode(3,12);
   // k.display();
   // LL d;
   // d.insertlast(3);
   // d.insertlast(4);
   // d.insertlast(31);
   // d.insertlast(311);
   // d.sortedInsert(44);
   // d.sortedInsert(2);
   // d.display();
   //LL k(a,5);
   //node*f=k.point_to_first();
   //node*q=0;
   k.createLL();
   //k.deletenode(1);
   //k.checksort();
   //k.duplicate();
  // k.recRev(f,q);
  // k.display();


}
