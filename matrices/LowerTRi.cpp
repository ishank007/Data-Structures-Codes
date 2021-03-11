#include<iostream>
using namespace std;

class matrix{
private:
    int *a;
    int n;
public:
    matrix(){
        n=5;
        a=new int [(5*6)/2];
        for(int i=0;i<(15);i++){
            a[i]=-1;
        }
    }
    matrix(int n){
        this->n=n;
        a=new int[(n*(n+1))/2];
    }
    void set1(int i, int j , int x){
        if(i>=j){
            a[(i*(i+1)/2)+j]=x;
        }
    }
    void get1( int i , int j ){
        if(i>=j){
            cout<<a[(i*(i+1)/2)+j]<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    void display(){
        for(int i=0;i<n ;i++){
            for(int j=0;j<n;j++){
                if(i>=j){
                cout<<a[(i*(i+1)/2)+j]<<" ";}
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
    int co=d*(d+1)/2;
    cout<<"Array of dim "<<d<<"><"<<d<<" has been created"<<endl;
    cout<<"Enter the elements of the lower tri"<<endl;
    int x;
    for(int i=0;i<d;i++){
            for(int j=0;j<d;j++){
                    cin>>x;
                m.set1(i,j,x);
            }
    }
    m.display();
}
//This is using row major mapping of lower trianglur matrix
