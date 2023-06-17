// WAP to show multipth inheritance and solve it.
/*
#include<iostream>
using namespace std;
class A{
    char a[10];
    public:
    void get1(){
            cout <<"Enter Class"<<endl;
            cin>>a;
    
        }
        void show(){
            cout <<"Class "<<a<<endl;
    
        }
};
class B: virtual public A{
    char b[9];
    public:
    void get2(){
            cout <<"Enter Class"<<endl;
            cin>>b;
    
        }
    void show(){
        cout<<"Class "<<b<<endl;
    }
};
class C: virtual public A{

    char c[9];
    public:
    void get3(){
            cout <<"Enter Class "<<endl;
            cin>>c;
    
        }
        void show(){
            cout <<"Class "<<c<<endl;
    
        }

};
class D:public B,public C{
    char d[9];
    public:
    void get4(){
            cout <<"Enter Class"<<endl;
            cin>>d;
    
        }
        void show(){
            cout <<"Class "<<d<<endl;
    
        }

};
int main()
{
    D ap;
    ap.get1(); 
    ap.get2(); 
    ap.get3(); 
    ap.get4(); 
    ap.A::show(); 
    ap.B::show(); 
    ap.C::show(); 
    ap.show(); 

    return 0 ;
}


// Design an abstract class that represents Paper. create class Book , Newspaper , Copy derived from class Paper. Add necessary member function to make your prpgram meaningful and also show constructor and destructor.

#include<iostream>
using namespace std;
class Paper{
    public:
    virtual void dis()=0;
    
};
class Book:public Paper{
    int num1;
    public:
    Book(){
        num1=10;
    }
    void dis(){
        cout<<"Number of Book are "<<num1<<endl;
    }
    ~ Book(){
        cout<<"class Book destroyed"<<endl;
    }
};
class Newspaper:public Paper{
    int num2;
    public:
    Newspaper(){
        num2=50;
    }
    void dis(){
        cout<<"Number of Newspaper is "<<num2<<endl;
    }
    ~ Newspaper(){
        cout<<"class Newspaper destroyed"<<endl;
    }
};
class Copy:public Paper{
    int num3;
    public:
    Copy(){
        num3=40;
    }
    void dis(){
        cout<<"Number of Paper is "<<num3<<endl;
    }
    ~Copy(){
        cout<<"class Copy destroyed"<<endl;
    }
};

int main()
{
    Copy d;
    Book b;
    Newspaper n;
    d.dis();
    b.dis();
    n.dis();
    return 0 ;
}
*/

// A bookshop sells book and DVD. TWO Class book and dvd are inherited from the base class media. Media has data member title and publication. The class book has member no. of pages and dvd has duration. Each class member have member function readdata() and show(). WAP modeliong the class hierarcy and call functons using pointer to base class. Your base class have virtual function and DMA
#include<iostream>
#include<string>
using namespace std;
class media{
    string title ,publication;
    public:
        virtual void get(){
            cout<<"Enter title and production: ";
            cin>>title>>publication;
        }
        virtual void show(){
            cout<<title<<publication<<endl;
        }
        virtual ~ media(){
            cout<<"Destructor media"<<endl;
        }
};
class Book:public media{
    int pages;
    public:
        void get(){
            cout<<"Enter pages: ";
            cin>>pages;
        }
        void show(){
            cout<<pages<<endl;
        }
        ~ Book(){
            cout<<"Destructor Book"<<endl;
        }


};
class dvd:public media{
    int duration;
    public:
        void get(){
            cout<<"Enter duration: ";
            cin>>duration;
        }
        void show(){
            cout<<duration<<endl;
        }
        ~ dvd(){
            cout<<"Destructor Dvd"<<endl;
        }
};

int main()
{
    media *ptr ;
    ptr=  new media;
    ptr -> get();
    ptr -> show();
    delete ptr;
    ptr= new Book;
    ptr -> get();
    ptr -> show();
    delete ptr;
    ptr= new dvd;
    ptr -> get();
    ptr -> show();
    delete ptr;
    return 0 ;
}

/*
#include<iostream>
using namespace std;
class student{
    public:
        student(){
            cout<<"Default constructor student"<<endl;
        }
        student(int x){
           cout<<"Parameterized student "<<endl;
        }
        ~ student(){
            cout<<"Destructor student"<<endl;
        }

};
class person:public student{
    public:
        person(){
            cout<<"Default constructor person"<<endl;
        }
        person(int x, int y):student(x){
           cout<<"Parameterized person "<<endl;
        }
        ~ person(){
            cout<<"Destructor person"<<endl;
        }


};
class teacher:public person{
    public:
        teacher(){
            cout<<"Default constructor teacher"<<endl;
        }
        teacher(int x, int y, int z):person(x,y){
           cout<<"Parameterized teacher "<<endl;
        }
        ~ teacher(){
            cout<<"Destructor teacher"<<endl;
        }


};

int main()
{
    teacher c;
    teacher (1,2,3);
    return 0 ;
}
 // virtual functuon banayesi pointer sanga kaam garna parxa */

