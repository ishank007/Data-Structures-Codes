#include<iostream>
using namespace std;

class Queue{
    int Size;
    int Front;
    int rear;
    int *p;
public:
    Queue(){
        Size=10;
        Front=0;
        rear=0;
        p=new int[10];
    }
    Queue(int Size){
        this->Size=Size;
        Front=0;
        rear=0;
        p=new int[Size];
    }
    int isempty(){
        if(Front==rear){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isfull(){
        if((rear+1)%Size==Front){
            return 1;
        }
        else{
            return 0;
        }
    }
    void display(){
        int i=Front+1;
        do{
            cout<<p[i]<<endl;
            i=(i+1)%Size;
        }while(i!=(rear+1)%Size);
    }
    void Enqueue(int x){
        if(isfull()){
            cout<<"Queue is full"<<endl;
        }
        else{
            rear=(rear+1)%Size;
            p[rear]=x;
        }
    }
    int  dequeue(){
        int x=-1;
        if(Front==rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            Front=(Front+1)%Size;
            x=p[Front];

        }
        return x;
    }

};

int main(){
    Queue q(4);
    q.Enqueue(2);
    q.Enqueue(21);
    q.Enqueue(23);
    //q.Enqueue(1);
   // q.Enqueue(31);
    //q.Enqueue(3);
    q.dequeue();
    q.Enqueue(55);
    q.display();

    //Here front and rear starting frm 0 which rsults it can only store size-1 number of elements only

}
