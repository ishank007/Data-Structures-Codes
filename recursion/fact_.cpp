#include<iostream>
using namespace std;
int fact(int x){
    if(x==0){
        return 1;
    }
    else{
        return fact(x-1)*x ;
    }

}

int main(){
    cout<<fact(-1);
}
