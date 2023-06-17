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



