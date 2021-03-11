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

    void enqueue(int x){
        if(isfull()){
            cout<<"Queue is Full"<<endl;
        }
        else{
            rear++;
            p[rear]=x;
        }
    }

    int dequeue(){
      int x=-1;
        if(isempty()==1){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            x=p[Front+1];
            Front++;
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
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(323);
    q.dequeue();
    q.display();

}
