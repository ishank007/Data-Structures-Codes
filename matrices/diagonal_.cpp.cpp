#include<iostream>
using namespace std;

class matrix{
private:
    int *a;
    int n;
public:
    matrix(){
        n=5;
        a=new int [5];
        for(int i=0;i<5;i++){
            a[i]=-1;
        }
    }
    matrix(int n){
        this->n=n;
        a=new int[n];
    }
    void set1(int i, int j , int x){
        if(i==j){
            a[i]=x;
        }
    }
    void get1( int i , int j ){
        if(i==j){
            cout<<a[i]<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    void display(){
        for(int i=0;i<n ;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                cout<<a[i]<<" ";}
                else{cout<<0<<" ";}
            }
            cout<<endl;
        }

    }
    ~matrix(){
        delete []a;
    }

};



int main(){
    int d;
    cout<<"Enter the Dim of Matrix"<<endl;
    cin>>d;
    matrix m(d);
    cout<<"Array of dim "<<d<<"><"<<d<<" has been created"<<endl;
    cout<<"Enter the elements of the diagonal"<<endl;
    for(int i=0,j=0;i<d;i++,j++){
        int x;
        cin>>x;
        m.set1(i,j,x);
    }
    m.display();
}
