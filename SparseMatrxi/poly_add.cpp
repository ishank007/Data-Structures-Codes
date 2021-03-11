#include<iostream>
using namespace std;

class term{
public:
    int coef;
    int exp;

};
class poly{
private:
    int n;
    term *t;
public:

    void read(){
    poly p,p1;
    cout<<"enter n for p"<<endl;
    cout<<"enter n for p1"<<endl;
    cin>>p.n;
    cin>>p1.n;
    p.t=new term[p.n];
    p1.t=new term[p1.n];
    cout<<"enter coeff and expo"<<endl;
        for(int i=0;i<p.n;i++){
            cin>>p.t[i].coef>>p.t[i].exp;
        }
    cout<<"enter coeff and expo"<<endl;
        for(int i=0;i<p1.n;i++){
            cin>>p1.t[i].coef>>p1.t[i].exp;
        }

    }
    void add(){

    }


};



int main(){
    poly p;
    p.read();

}
