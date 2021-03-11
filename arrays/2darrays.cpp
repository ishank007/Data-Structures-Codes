#include<iostream>
using namespace std;

int main(){
    //Normal 2d arr in stack
    int a[3][4]={1,2,3,4,5,6,7,8,9,11,12,10};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //here ptr array is in stack and its coulmn in heap with garbage values
    int *A[3];
    A[0]=new int [4];
    A[1]=new int [4];
    A[2]=new int [4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    //here double ptr is used and whole of the array is made in heap
    int **B;
    B=new int*[3];
    B[0]=new int [4];
    B[1]=new int [4];
    B[2]=new int [4];
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
}
