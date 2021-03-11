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
    poly p;
    cout<<"enter n"<<endl;
    cin>>p.n;
    p.t=new term[p.n];
    cout<<"enter coeff and expo"<<endl;
        for(int i=0;i<p.n;i++){
            cin>>p.t[i].coef>>p.t[i].exp;
        }
    }


};



int main(){
    poly p;
    p.read();

}
