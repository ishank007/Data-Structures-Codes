#include<iostream>
using namespace std;

class Queue{
private:
    int Size;
    int Front;
    int rear;
    int *p;
public:
    Queue(){
        Size=10;
        Front=-1;
        rear=-1;
        p=new int[10];
    }
    Queue(int Size){
        this->Size=Size;
        Front=-1;
        rear=-1;
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
        if(rear==Size-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    void enqueue_rear(int x){
        if(isfull()){
            cout<<"Queue is Full"<<endl;
        }
        else{
            rear++;
            p[rear]=x;
        }
    }
    void enqueue_Front(int x){
        if(Front!=-1 ){
            p[Front]=x;
            Front--;
        }
        else{
            cout<<"Cant enter element"<<endl;
        }


    }
    int dequeue_rear(){
        int x=-1;
        if(isempty()==1){
            cout<<"Cant del"<<endl;
        }
        else{
           x=p[rear];
            rear--;
        }
        return x;


    }

    int dequeue_Front(){
      int x=-1;
        if(isempty()==1){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            Front++;
            x=p[Front];

        }
        return x;

    }
    void display(){
        int i=0;
        for(int i=Front+1;i<=rear;i++){
            cout<<p[i]<<endl;
        }

    }


};


int main(){
    Queue q(6);
    q.enqueue_rear(2);
    q.enqueue_rear(3);
    q.enqueue_rear(323);
    q.dequeue_Front();
    q.enqueue_Front(4);
    q.enqueue_Front(22);
//q.dequeue_rear();

//q.dequeue_rear();

    q.display();

}
