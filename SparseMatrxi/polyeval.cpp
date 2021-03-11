#include<iostream>
#include<math.h>
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

    void eval(){
    poly p;
    cout<<"enter n"<<endl;
    cin>>p.n;
    p.t=new term[p.n];
    cout<<"enter coeff and expo"<<endl;
        for(int i=0;i<p.n;i++){
            cin>>p.t[i].coef>>p.t[i].exp;
        }
        int x=4;
        int sum=0;
        for(int i=0;i<p.n;i++){
            sum+=p.t[i].coef*pow(x,p.t[i].exp);
        }
        cout<<sum<<endl;


    }


};



int main(){
    poly p;
    p.eval();

}
