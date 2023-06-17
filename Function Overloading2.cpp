/*
//Volume of cube, cuboid, cylinder using function overloading.
#include<iostream>
#include<cmath>
using namespace std;
float vol(float l){
    return(l*l*l);
}
float vol(float l, float b , float h){
    return(l*b*h);
}
float vol(float r, float h){
    return(3.14*r*r*h);
}
int main(){
    float a,b,c,d,e,f,vol1,vol2,vol3;
    cout<<"Enter the length of cube: ";
    cin>>a;
    cout<<"Enter the length breadth and height of cuboid: ";
    cin>>b>>c>>d;
    cout<<"Enter the radius and height of the cylinder: ";
    cin>>e>>f;
    vol1=vol(a);
    vol2=vol(b,c,d);
    vol3=vol(e,f);
    cout<<"Volume of cube is "<<vol1<<endl;
    cout<<"Volume of cuboid is "<<vol2<<endl;
    cout<<"Volume of cylinder is "<<vol3<<endl;
    return 0;

}

/* 
 //Simple interest
#include<iostream>
#include<cmath>
using namespace std;
inline float SI(float p, float t, float r){
    return(p*t*r/100);

}
int main(){
    float a,b,c,si;
    cout<<"Enter P, T, R: ";
    cin>>a>>b>>c;
    si=SI(a,b,c);
    cout<<"Simple interest is "<<si<<endl;
    return 0;
}
*/

//Price of n items. Take price and n from user. Use default value of price 120
// If not provided by user
#include<iostream>
using namespace std;
float price(int n, int =120);

int main(){
    int a,b,total,total2;
    char e;
    cout<<"Enter number of items: ";
    cin>>a;
    cout<<"Do you want to mention the price (Y/N)? ";
    cin>>e;
    if(e=='Y' || e=='y'){
        cout<<"Enter the price: ";
        cin>>b;
        total=price(a,b);        // with argument
        cout<<"Price is "<<total<<endl;
    }
    else{
        total2=price(a);        // without argument
        cout<<"Total price is "<<total2<<endl;
    }
    
   return 0;
}
float price(int n, int b){
    return(n*b);
}
