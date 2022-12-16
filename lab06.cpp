// WAP to overload ++ (prefix , postfix) and --(prefix,postfix) operations for a class names TITLE (hr,min,sec)
/*
#include<iostream>
using namespace std;
class temp{
    int hr,min,sec;
    public:
        temp(int x, int y,int z){
            hr=x;
            min=y;
            sec=z;
        }

        temp operator ++(int){
            //temp temp;
            hr++;
            min++;
            sec++;

        }
        void operator ++(){
            ++hr;
            ++min;
            ++sec;



        }
        void operator --(int){
            hr--;
            min--;
            sec--;



        }
        void operator --(){
            --hr;
            --min;
            --sec;

        }
        void display(){
            cout<<hr<<min<<sec ; 
        }

};
int main()
{
    temp t1=temp(1,2,3);
    t1++;
    t1.display();
    cout<<endl;
   // temp t1=temp(1,2,3);
    ++t1;
    t1.display();
    cout<<endl;
    temp t2=temp(2,3,4);
    t1--;
    t1.display();
    cout<<endl;
    //temp t2=temp(1,2,3);
    --t2;
    t2.display();
    cout<<endl;

    return 0 ;
}


*/

/*
// WAP to create a class distance with m,cm as data members compare (>,<,==) objects of class distance using operator overloading
#include<iostream>
using namespace std;
class dist{
    float m,cm;
    public:
        dist(float  x,float y){
            m=0;
            cm=y+x*100;
        }
    
        bool operator >(dist a){
            return(cm>a.cm)?true:false;
        }
        bool operator <(dist a){
            return(cm<a.cm)?true:false;
        }
        bool operator==(dist a){
            return(cm==a.cm)?true:false;
        }
        
};
int main()
{
    float m1,cm1,m2,cm2;
    cout<<"Enter the 1st distance: ";
    cin>>m1>>cm1;
    cout<<"Enter the 2nd distance: ";
    cin>>m2>>cm2;
    dist d1=dist(m1,cm1);
    dist d2=dist(m2,cm2);
    if(d1>d2){
        cout<<"Greater"<<endl;
    }
    else if(d1<d2){
        cout<<"Smaller"<<endl;
    }
    else    
        cout<<"Equal"<<endl;


    return 0 ;
}
*/
#include<iostream>
using namespace std;
class Time{
    int hr,min,sec;
    public:
        Time(int x, int y,int z){
            hr=x;
            min=y;
            sec=z;
        }
        Time(){
            hr=0;
            min=0;
            sec=0;
        }

        Time operator ++(int){
            Time temp;
            temp.hr=hr++;
            temp.min=min++;
            temp.sec=sec++;
            return temp;

        }
        Time operator ++(){
            Time temp;
            temp.hr=++hr;
            temp.min=++min;
            temp.sec=++sec;
            return temp;



        }
        Time operator --(int){
            Time temp;
            temp.hr=hr--;
            temp.min=min--;
            temp.sec=sec--;
            return temp;



        }
        Time operator --(){
            Time temp;
            temp.hr= --hr;
            temp.min= --min;
            temp.sec= --sec;
            return temp;
            
        }
        void display(){
            cout<<hr<<min<<sec ; 
        }

};
int main()
{
    Time t1=Time(1,2,3);
    Time tt1=t1++;
    tt1.display();
    cout<<endl;
    Time tt2=++t1;
    tt2.display();
    cout<<endl;
    Time t2=Time(5,4,1);
    Time tt3= t2--;
    tt3.display();
    cout<<endl;
    Time tt4=--t2;
    tt4.display();
    cout<<endl;
    return 0 ;
}

/*
#include<iostream>
using namespace std;
class dist{
    float m,cm;
    public:
        dist(float  x,float y){
            m=0;
            cm=y+x*100;
        }
        bool operator >(dist a){
            return(cm>a.cm)?true:false;
        }
        bool operator <(dist a){
            return(cm<a.cm)?true:false;
        }
        bool operator==(dist a){
            return(cm==a.cm)?true:false;
        }
            
};
int main()
{
    float m1,cm1,m2,cm2;
    cout<<"Enter the 1st distance: ";
    cin>>m1>>cm1;
    cout<<"Enter the 2nd distance: ";
    cin>>m2>>cm2;
    dist d1=dist(m1,cm1);
    dist d2=dist(m2,cm2);
    if(d1>d2){
        cout<<m1<<"M "<<cm1<<"Cm is greater than " <<m2<<"M "<<"Cm"<<cm2<<endl;
    }
    else if(d1<d2){
        cout<<m1<<"M "<<cm1<<"Cm is smaller than " <<m2<<"M "<<"Cm"<<cm2<<endl;
    }
    else    
        cout<<m1<<"M "<<cm1<<"Cm is equal to " <<m2<<"M "<<cm2<<"Cm"<<endl;
    return 0 ;
}
*/
