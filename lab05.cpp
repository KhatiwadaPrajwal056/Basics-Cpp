
//WAP to store department id, name with default, parameterized construtor. Also write destructor in the same class and show the objects are destroyed in the reverse order of creation with suitable message. use static for the count

#include<iostream>
#include<string.h>
using namespace std;
class department{
    private :
         char name[10];
         int id;
         static int count;
    public:
        
        department(){
            cout<<"Default constructor called: "<<endl;
            strcpy(name,"Abc department");
            id=12303;
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            count++;
        }
        department(char a[10],int idd){
            
            cout<<endl<<"Parameterized constructor called: "<<endl;
            strcpy(name,a);
            id=idd;
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            count++;
        }
        static int readcount(){
            cout<<"Object "<<count<<" Created"<<endl;
            cout<<endl;
        }
    
        ~ department(){
            cout<<"Object "<<count<<" Destrtoyed"<<endl;
            count--;
        }

};
int department::count;
int main(){
    department o1;
    department::readcount();
    char NAME[0];
    int ID;
    cout<<"Enter the name: ";
    cin>>NAME;
    cout<<"Enter the ID: ";
    cin>>ID;
    department o2=department(NAME,ID);
    department::readcount();
    return 0 ;


} 

/*

//Create 2 classes DM & DB. DM stores distances in meters & centimeters & DB in feet & inch . Using friend function add one object of DM with object of DB. The object that stores result may be DB or DM depending upon units in which the result are required and display . Find result either in feet and inch or meter and cemtimeter depending in the object from main.
#include<iostream>
using namespace std;
class dist2;
class dist1{
    float m,cm;
    public:
        void getdata(){
            cout<<"Enter M and Cm: ";
            cin>>m>>cm;
        }
    friend void add(dist1, dist2);
};
class dist2{
    float feet,inch;
    public:
        void getdata(){
            cout<<"Enter feet and inch: ";
            cin>>feet>>inch;
        }
    friend void add(dist1 , dist2 );
};

void add(dist1 p, dist2 q){
    float tm,tcm;
    tm= p.m+ q.feet*0.3048;
    tcm= p.cm+ q.inch*2.54;
    cout<<endl<<"Total Distance is "<<tm<<"M "<<tcm<<"Cm"<<endl; 
}
int main(){
    dist1 d1;
    dist2 d2;
    d1.getdata();
    d2.getdata();
    add(d1,d2);
    return 0;
} 
*/
base class*/
#include <iostream>
using namespace std;
class derived;
class base
{
public:
    int e1, e2, sum;
    base()
    {
        cout << "enter the two vector coordinates" << endl;
        cin >> e1 >> e2;
    }
    friend void output(base &t, derived &d);
};
void output(base &t, derived &d)
{
    cout << "The sum of the vector coordinates " << t.e1 << " & " << t.e2 << " is : " << d.base::sum << endl;
}
class derived : public base
{
public:
    void add_vector()
    {
        sum = e1 + e2;
    }
};

int main()
{
    base b;
    derived d;
    d.add_vector();
    output(b, d);
}