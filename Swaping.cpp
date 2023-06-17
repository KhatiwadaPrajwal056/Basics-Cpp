//WAP to swap variable using reference
#include<iostream>
using namespace std;
int numref(int &, int &);
int numpointer(int *,int *);
int main (){
    int a=10,b=20;
    cout<<"Before swapping:"<<endl;
    cout<<"a="<<a;
    cout<<" b="<<b<<endl;
    numref(a,b);
    cout<<"After swapping: "<<endl;
    cout<<"a="<<a;
    cout<<" b="<<b<<endl;
    numpointer(&a,&b);
    return 0;
}
int numref(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int numpointer(int *x,int *y){
    int *temp;                          //pointer
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping: "<<endl;
    cout<<"a="<<*x;                  //dereferencing of pointer
    cout<<" b="<<*y<<endl;
}

