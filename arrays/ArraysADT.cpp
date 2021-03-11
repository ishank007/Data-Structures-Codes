#include<iostream>
using namespace std;

class arrays{
private:
    int *p;
    int sizeofa;
    int length;
public:
    arrays(int si=10 , int le=6 ){
        p=new int [si];
        sizeofa=si;
        length=le;
        if(length==6){
            for(int i=0;i<length;i++){
                p[i]=i;
            }
        }
        else{
            cout<<"enter elements"<<endl;
            for(int i=0;i<length;i++){
                cin>>p[i];
            }
        }
    }
    void display(){
        for(int i=0;i<length;i++){
            cout<<p[i]<<endl;
        }
    }
    void append(int d){
        p[length]=d;
        length++;
    }
    void insertion(int d, int index){
        for(int i=length;i>index;i--){
            p[i]=p[i-1];
        }
        p[index]=d;
        length++;
    }
    void Delete(int index){
        p[index]=0;
        for(int i=index;i<length-1;i++){
            p[i]=p[i+1];
        }
        length--;
    }
    int lsearch(int element){

        for(int i=0;i<length;i++){
            if(p[i]==element){
                return i;
            }
        }
        return -1;
    }
    int bsearch(int element){
        int l=0;
        int h=length;
        while(l<=h){
            int mid=(l+h)/2;
            if(element==p[mid]){
                return mid;
            }
            else{
                if(p[mid]<element){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return -1;
    }
    int get(int index){
        return p[index];
    }
    void sett(int index , int num){
        p[index]=num;
    }
    int maxim(){
        int a=p[0];
        for(int i=1;i<length;i++){
            if(a<p[i]){
                a=p[i];
            }
        }
        return a;
    }
    int minim(){
        int a=p[0];
        for(int i=1;i<length;i++){
            if(a>p[i]){
                a=p[i];
            }
        }
        return a;
    }
    int sum(){
        int total=0;
        for(int i=0;i<length;i++){
            total=total+p[i];
        }
        return total;
    }
    int avg(){
        int total=0;
        for(int i=0;i<length;i++){
            total=total+p[i];
        }
        return total/length;
    }
    void reverse1(){
    int b[length];
        for(int i=length-1,j=0;i>=0;i--,j++){
            b[j]=p[i];
        }
        for(int i=0;i<length;i++){
            p[i]=b[i];
        }

    }

    void reverse2(){
        for(int i=0,j=length-1;i<j;i++,j--){
            int temp;
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
        }
    }
    void lshift(){
        for(int i=1;i<length;i++){
            p[i-1]=p[i];
        }
        length--;
    }
    void lrotate(){
        int save=p[0];
        for(int i=1;i<length;i++){

            p[i-1]=p[i];
        }
        p[length-1]=save;
    }
    void insertsorted(int element){
        int i=length-1;
        while(element<p[i]){
            p[i+1]=p[i];
            i--;
        }
        p[i+1]=element;
        length++;

    }
    int  sortcheck(){
        for(int i=0;i<length-1;i++){
            if(p[i]>p[i+1]){
                return -1;
            }
        }
        return 1;
    }

    void arrange(){
        int i=0,j=length-1;
        while(i<j){
            while(p[i]<0){i++;}
            while(p[j]>0){j--;}
            if(i<j)    {swap(p[i],p[j]);}
        }
    }


    ~arrays(){
    }



};

int main(){
    arrays object(15,6);
    //object.append(18);
    //object.insertion(5,5);
    //object.Delete(4);
    //object.display();
    //cout<<"Enter the element you want to search"<<endl;
    //int ele;
    //cin>>ele;
    //cout<<object.bsearch(ele)<<endl;
    //cout<<object.minim()<<endl;
    //cout<<object.maxim()<<endl;
    //object.sett(4,66);
    //cout<<object.get(4)<<endl;
    //cout<<object.sum();
    //object.reverse2();
    //object.lshift();
    //object.lrotate();
    //object.arrange();
    //cout<<object.sortcheck();   //this will return 1 and 1 for true and false
    object.insertsorted(18);
    object.display();

}
