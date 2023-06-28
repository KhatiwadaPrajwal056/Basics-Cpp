// addition and sub
#include<iostream>
using namespace std;
int add(int [],int [],int [],int);
int main(){
    int n;
    cout<<"Enter number of bits: ";
    cin>>n;
    int sum[n];
    int *b1= new int[n];
    int *b2= new int[n];
    cout<<"Enter b1: ";
    for(int i=0;i<n;i++){
        cin>>b1[i];
    }
    cout<<"Enter b2: ";
    for(int i=0;i<n;i++){
        cin>>b2[i];
    }
    int i=n;
    do{
        i--;
        b2[i]=b2[i];
    }while(b2[i]!=1);
    for(i=i-1;i>=0;i--){
        if(b2[i]==0){
            b2[i]=1;
        }
        else
            b2[i]=0;
    }
    int carry=add(b1,b2,sum,n);
    cout<<"Carry is: "<<carry<<endl;
    cout<<"Sum is: ";
    for(int i=0;i<n;i++){
        cout<<sum[i];
    }
    return 0 ;
}
int add(int *b1,int *b2,int *sum,int n){
    int carry=0;
    for (int i=n-1;i>=0;i--){
        sum[i]=(b1[i]+b2[i]+carry)%2;
        carry=(b1[i]+b2[i]+carry)/2;
    }
    return carry;
}
