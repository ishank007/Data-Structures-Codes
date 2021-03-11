#include<iostream>
using namespace std;

class element{
public:
    int i;
    int j;
    int x;
};
class sparse{
private:
    int m;
    int n;
    int num;
    element *ele;
public:
    sparse(int m, int n , int num){
        this->m=m;
        this->n=n;
        this->num=num;
        ele=new element[this->num];
    }

    sparse operator+(sparse &s1){
        int i,j,k;
        if( m!=s1.m || n!=s1.n){

        }
        sparse*sum=new sparse(m,n,num+s1.num);
        i=j=k=0;

        while(i< num && j < s1.num){
            if(ele[i].i<s1.ele[j].i){
                sum->ele[k++]=ele[i++];
            }
            else if(ele[i].i>s1.ele[j].i){
                sum->ele[k++]=s1.ele[j++];
            }
            else{
                      if(ele[i].j>s1.ele[j].j){
                        sum->ele[k++]=ele[i++];
                        }
                     else if(ele[i].j>s1.ele[j].j){
                        sum->ele[k++]=s1.ele[j++];
                        }
                     else{
                        sum->ele[k]=ele[i];
                        sum->ele[k++].x=ele[i++].x+s1.ele[j++].x;
                        }
            }
            for(;i<num;i++){sum->ele[k++]=ele[i];}
            for(;j<s1.num;j++){sum->ele[k++]=s1.ele[j];}


        }
        sum->num=k;
                return *sum;

    }




    friend istream& operator>>(istream &is , sparse &s);
    friend ostream& operator<<(ostream &os , sparse &s);

    ~sparse(){
        delete []ele;
    }
};
 istream& operator>>(istream &is , sparse &s){
   cout<<"Enter The elements as row column and element"<<endl;
        for(int i=0;i<s.num;i++){
            is>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
        }
    return is;
}

 ostream & operator<<(ostream &os , sparse &s){
    int k=0;
        for(int i=0;i<s.m;i++){
            for(int j=0;j<s.n;j++){
                if(s.ele[k].i==i && s.ele[k].j==j){
                    os<<s.ele[k++].x<<" ";
                }
                else{
                    os<<0<<" ";
                }
            }
            os<<endl;
        }
        return os;
    }



int main(){
    sparse s1(5,5,5);
    sparse s2(5,5,5);
    cin>>s1;
    cin>>s2;
    sparse sum=s1+s2;
    cout<<sum;

}

