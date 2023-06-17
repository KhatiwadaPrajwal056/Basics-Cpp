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