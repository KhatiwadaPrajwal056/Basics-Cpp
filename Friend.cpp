#include<iostream>
using namespace std;
class hero{
    private:
        int a,b;
    public:
        friend int add(int a, int b);
}p;
int add(int a, int b){
    return(a+b);
}
int main(){
    int x,y,z;
    cin>>x>>y;
    z=add(x,y);
    cout<<"Sunm:hv"<<z<<endl;
    return 0;

}





