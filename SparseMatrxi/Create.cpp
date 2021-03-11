#include<iostream>
using namespace std;

class element{
public:
    int i;
    int j;
    int x;
};
class sparse{
private:
    int m;
    int n;
    int num;
    element *ele;
public:
    sparse(int m, int n , int num){
        this->m=m;
        this->n=n;
        this->num=num;
        ele=new element[this->num];
    }
    void read(){
        cout<<"Enter The elements as row column and element"<<endl;
        for(int i=0;i<num;i++){
            cin>>ele[i].i>>ele[i].j>>ele[i].x;
        }
    }

    void display(){
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ele[k].i==i && ele[k].j==j){
                    cout<<ele[k++].x<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
    cout<<endl;
    cout<<"These is the matrix"<<endl;
    }

    ~sparse(){
        delete []ele;
    }
};
//You can also overload this read and display  so that dirctky we can cout and cin thr object
int main(){
    sparse s(5,5,5);
    s.read();
    s.display();

}
