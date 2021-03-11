#include<iostream>
using namespace std;

void changeUpper(char a[]){
        for(int j=0;a[j]!='\0';j++){
            a[j]=a[j]-32;
        }
        cout<<a<<endl;
}
void changeLower(char a[]){
        for(int j=0;a[j]!='\0';j++){
            a[j]=a[j]+32;
        }
        cout<<a<<endl;
}
void changetoggle(char a[]){
        for(int j=0;a[j]!='\0';j++){
            if(a[j]>=65 && a[j]<=90){
                a[j]=a[j]+32;
            }
            else if(a[j]>=97 && a[j]<=122){
                a[j]=a[j]-32;
            }
        }
        cout<<a<<endl;
}

void countv(char a[]){
    int j,vc=0;
    for( j=0;a[j]!='\0';j++){
            if(a[j]=='a' || a[j]=='A' || a[j]=='e' || a[j]=='E' || a[j]=='I' || a[j]=='i' || a[j]=='o' || a[j]=='O' || a[j]=='u' || a[j]=='U'){
                vc+=1;
            }
    }
    cout<<vc;
}
void countwords(char a[]){
        int words=0;
        for(int j=0;a[j]!='\0';j++){
            if(a[j]==' ' && a[j-1]!=' '){
               words++;
            }
        }
        cout<<words+1<<endl;
}
int  validate_string(char a[]){
    for(int j=0;a[j]!='\0';j++){
        if(!((a[j]>=65 && a[j]<=90) && (a[j]>=97 && a[j]<=122) && (a[j]>=48 && a[j]<=57) )){
            return -1;
        }

    }
    return 1;
}

void reversestr(char a[]){
    int i;
    for( i=0;a[i]!='\0';i++){}
    char s[i];
    int k=0;
    for(int j=i-1;j>=0;j--,k++){
        s[k]=a[j];
    }
    s[k]='\0';
   cout<<s<<endl;


}



int main(){
    char  a[]="anil";
    //changeUpper(a);
    //changeLower(a);
   // changetoggle(a);
    //    countv(a);
    //countwords(a);
    //cout<<validate_string(a);
    reversestr(a);
}
