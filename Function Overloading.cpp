// Distance between two points
#include<iostream>
#include <cmath>
using namespace std;
float add(float x, float y ){
  return(sqrt(x+y));
}
int main(){
    float a,b,c,d;
    cout<<"Enter two points of first coordinate: ";       // << is insertion operator
    cin>>a>>b;                                           // >> is extraction operator
    cout<<"Enter two points of second coordinate: ";
    cin>>c>>d;
    float x,y,dis;
    x=pow((d-b),2);
    y=pow((c-a),2);
    dis=add(x,y);
    cout<<"Distance is "<<dis<<endl;
    return 0;
}

/* Volume of cube, cuboid, cylinder using function overloading.
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