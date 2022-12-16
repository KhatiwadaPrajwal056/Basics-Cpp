//WAP to read n numberw from user & display its average. USe DMA to allocate memory for an array.
/*
#include<iostream>
using namespace std;
int main(){
    int i,n,*a;
    float sum=0;
    float avg;
    cout<<"Enter n:";
    cin>>n;
    a= new int[n];
    cout<<"Enter elements: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    avg=sum/n;
    cout<<"Average is "<<avg<<endl;
    delete []a;
    return 0;
}

//WAP that explains the concept of namespace
#include<iostream>
using namespace std;
namespace rect{
    float ar(float a, float b){
        return(a*b);
    }
}
//using namespace rect;
int main(){
    float x ,y,z;
    cout<<"Enter length and breadth of rect: ";
    cin>>x>>y;
    z=rect::ar(x,y);
    cout<<"Area of rect is "<<z<<endl;
    return 0;
}
*/

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

