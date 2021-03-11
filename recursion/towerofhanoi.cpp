#include<iostream>
using namespace std;

int TOH(int n, int A, int B , int C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<A<<" "<<C<<endl;
        TOH(n-1,B,A,C);
    }

}

int main(){
    TOH(3,1,2,3);
}
//A and C will display the moves of upper most disk from respective tower 1,2 3
