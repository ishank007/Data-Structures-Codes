#include<iostream>
using namespace std;

int palindrome(char a[]){
    int i;
    for( i=0;a[i]!='\0';i++){
    }
    for(int k=0,l=i-1;a[k]!='\0' ,l>=0;k++,l--){
        if(a[k]!=a[l]){
            return -1;
        }
    }
    return 1;
}

int equalcheck(char a[], char b[]){
    for(int i=0;a[i]!='\0';i++){
        if(a[i]!=b[i]){
            return -1;
        }
    }
    return 1;
}
int duplicate_hash(char a[]){
    //only lowercase is considered for this fn
    int H[26]={0};
    for(int i=0;a[i]!='\0';i++){
        H[a[i]-97]+=1;
    }
    for(int i=0;i<26;i++){
        if(H[i]>1){
            char r=i+97;
            cout<<r<<endl;
        }
    }
}

void duplicate_bits(char a[]){
    int H=0,x=0;
    for(int i=0;a[i]!='\0';i++){
        x=1;
        x=x<<(a[i]-97);
        if( (x & H) > 0){
            cout<<a[i]<<endl;
        }
        else{
            H= x | H;
        }
    }

}

void anagram( char a[], char b[]){
    //This will only work if two strings have equal length
    int H[26]={0};
    for(int i=0;a[i]!='\0';i++){
        H[a[i]-97]++;
    }
    int j;
    int f=0;
    for( j=0;b[j]!='\0';j++){
        H[b[j]-97]-=1;
    }
    for(int i=0;i<26;i++){
        if(H[i]<0){cout<<"Not anagram"<<endl;
            f=1;}
    }
    if(f==0){
        cout<<"anagram"<<endl;
    }

}



int main(){
    char a[]="medicall";
   //cout<< palindrome(a);
    char b[]="delimalc";
   //cout<<equalcheck(a,b);
    anagram(a,b);

}
//check equal , check palindrome, or  from back or copy into new array  and compare

//comapre with other, hashing, bits and their complexity,bits can be used for int too
//Merging,masking  anding oring

//anagram - normal  method of comparison of to string , hash table
