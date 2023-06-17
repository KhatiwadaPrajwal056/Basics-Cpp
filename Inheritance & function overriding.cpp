//Single Inheritance and also function overriding

#include<iostream>
using namespace std;
class A{
    int a=10,b=20;
    public:
        void add(){
        int add;
        add=a+b;
        cout<<add<<endl;
    }
};
class B:public A{
    int x=40,y=20;
    public:
        
        void add(){
            int add;
            add=x+y;
            cout<<add<<endl;
        }  
};
int main()
{   
    B num;
    num.A::add();
    num.add();
    return 0 ;
}

// Multiple inheritance which shows ambiguous. Also resolve it
/*
#include<iostream>
using namespace std;
class Area{ 
    int l,b;
    public:
    void get(){
        l=5;
        b=5;
    }
    void dis(){
        int c=l*b;
        cout<<c<<endl;
    }
    int getArea() {
        return l*b;
    }
};
class vol{
    Area area;
    // int l,b,h;
    int h;
    public:
    void get(){
        area.get();
        h=5;
    }
    void dis(){
        int c= area.getArea()*h;
        cout<<c<<endl;
    }

};
class box:public Area, public vol{
};

int main()
{
    box a;
    //a.get(); // Ambiguous
    //a.dis(); // ambiguous
    // resolving
    a.Area::get();
    a.Area::dis();
    a.vol::get();
    a.vol::dis();

    return 0 ;
}
*/