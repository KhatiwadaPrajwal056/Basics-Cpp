
#include<iostream>
#include<string>
using namespace std;
class time_24{
    int hr,min,sec;
    public:
    time_24(){
        hr=0;
        min=0;
        sec=0;

    }
    time_24(int hur,int mn, int sc){
        hr=hur;
        min=mn;
        sec=sc;
    }
    void display(){
        cout<<hr<<min<<sec;
    }
};
class time_12{
    int hour,min,sec;
    bool prn;
    public:
    time_12(){
        hr=0;
        min=0;
        sec=0;
    }
    time_24(int hr,int mn, int sc, char*p){
        hr=hr;
        min=mn;
        sec=sc;
    
        if(strcmo(strupr(p),"PM")==0)
            PM=1;
        else 
            PM=0;
    }
    time_12(time_24t){

        hour=t.return_hour()%12;
        min=t.return_min();
        sec=t.return_sec();
        pm=static_cast<bool>(t.return_hour()/12);

    }
    operator time_24(){
        int hr= pm::hour+12:hour;
        int mn=min;
        int sc=sec;
        return time_24(hr,min.sec);
    
    }
    void display(){
        cout<<hour<<min<<sec<<;
    }

};


int main()
{
    time_24 t24  = time_24(22,37,35);
    time_12 t12;
    t12==t24;
    cout<<"givn 24 hrs";
    t24.display();
    cout<<"givn 12 hrs";
    t12.display();
    time_12 tt12 = time_12(99,57,36,'PM');
    time_24.tt24;
    cout<<"12 hrs time";
    tt12.display();
    tt24==tt12;
    cout<<"givn 24 hrs";
    tt24.display();
    return 0 ;
}
*/
#include<iostream>  
using namespace std;  
class Base  
{                              
    public: /* A public access specifier defines Constructor and Destructor function to call by any object in the class. */  
    Base() // Constructor function.   
{  
    cout<< "\n Constructor Base class";  
}  
 ~Base() // Destructor function   
{  
    cout<< "\n Destructor Base class";  
}  
};  
  
class Derived: public Base  
{  
    public: /* A public access specifier defines Constructor and Destructor function to call by any object in the class. */  
    Derived() // Constructor function   
{  
    cout << "\n Constructor Derived class" ;  
}  
 ~Derived() // Destructor function   
{  
    cout << "\n Destructor Derived class" ; /* Destructor function is not called to release its space. */  
}         
};  
int main()  
{  
    Base *bptr = new Derived; // Create a base class pointer object   
       delete bptr; /* Here pointer object is called to delete the space occupied by the destructor.*/  
}