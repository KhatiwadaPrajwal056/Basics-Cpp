/*
//Area of circle, rect and triangle
#include <iostream>
#include <math.h>
using namespace std;
float ar(float r)
{
    return (3.14 * r * r);
}
float ar(float l, float b)
{
    return (l * b);
}
float ar(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main()
{
    float r, l, a, b, c;
    cout << "Enter the radius of circle: ";
    cin >>r;
    cout << "Enter the length and breadth: ";
    cin >>l>>b;
    cout << "Enter the 3 sides of triangle: ";
    cin >>a>>b>>c;
    cout << "Area of cricle is " << ar(r) << endl;
    cout << "Area of rectangle is " << ar(l, b) << endl;
    cout << "Area of triangle is " << ar(a, b, c) << endl;
    return 0;
}



//Price of N items with default function
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




//WAP to swap variable using reference
#include<iostream>
using namespace std;
int numref(int &, int &);
int numpointer(int *,int *);
int main (){
    int a=10,b=20;
    cout<<"Before swapping:"<<endl;
    cout<<"a="<<a;
    cout<<" b="<<b<<endl;
    numref(a,b);
    cout<<"After swapping: "<<endl;
    cout<<"a="<<a;
    cout<<" b="<<b<<endl;
    return 0;
}
int numref(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}


//14.Create a class named “animal” with data and methods as follows:
        Data:name,id_number,cost
            methods:void setdata(char,int,float); and void showdata();

#include<iostream>
#include<string>
using namespace std;
class animal{
    char name[5];
    int id;
    float cost;
    public:
        void setdata(char name1[5], int id1, float cost1 ){
            strcpy(name,name1);
            id=id1;
            cost=cost1;
        }
        void showdata(){
            cout<<"Name of the animal is "<<name<<endl;
            cout<<"Id of the animal is "<<id<<endl;
            cout<<"Cost of the animal is "<<cost<<endl;
        }
}a;
int main()
{

    char name1[5];
    int id1;
    float cost1;
    cout<<"Enter the name of the animal: ";
    cin>>name1;
    cout<<"Enter the ID of the animal: ";
    cin>>id1;
    cout<<"Enter the COST of the animal: ";
    cin>>cost1;
    a.setdata(name1, id1, cost1);
    a.showdata();
    return 0 ;
}




16.WAP to add distances D1(feet,inch) and D2(feet,inch).
1.Display result inside member function.
2.Display result by returning values from member function.

i)nameless object
ii)named object
3. using member function

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

20.WAP to create a class student.Ask user to enter name and marks obtained in 5
different subjects.The program should print the name and total marks obtained by the
student.
#include <iostream>
#include <string.h>
using namespace std;
class student
{
    string name[10];
    float marks[5];
    public:
        int i,j,n;
        float total1=0,total2[9];
        void getdata(){
            cout<<"Enter the number of student: ";
            cin>>n;
            for (i = 0; i < n; i++){
                cout <<endl<< "Enter the name of student "<<i+1<<" :";
                cin>>name[i];
                for (j = 0; j < 5; j++){
                    cout<<"Enter the Marks obtained in subject "<<j+1<<" :";
                    cin>>marks[j];
                    total1+=marks[j];
                }
                total2[i]=total1;
            }
        }
        void display(){
                cout<<endl;
                for (i = 0; i < n; i++){
                   cout<<"Total mark obtained by "<<name[i]<<" is "<<total2[i]<<endl;
                }
            }
};
int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}

Inheritace:

1. WAP with three classes students,test and result by using multilevel inheritance. Assume necessary data members and function yourself and program with input information input data and calculate marks total and display result.
#include<iostream>
using namespace std;
class student{
    protected:
        char name[10];
    public:
        void getname(){
            cout<<"Enter the name: ";
            cin>>name;
        }
        void displayname(){
            cout<<"The name of the student is "<<name<<endl;
        }
};
class test:public student{
    protected:
        float mark1,mark2;
    public:
        void getmark(){
            cout<<"Enter the marks of two subject ";
            cin>>mark1>>mark2;
        }
        void displaymark(){
            cout<<"Mark of subject 1 is "<<mark1<<endl;
            cout<<"Mark of subject 2 is "<<mark2<<endl;
        }
};
class result:public test{
    float total;
    public:
        void display(){
            displayname();
            displaymark();
            total= mark1+mark2;
            cout<<"Total mark is "<<total<<endl;

        }
};
int main()
{
    result o1;
    o1.getname();
    o1.getmark();
    o1.display();
    return 0 ;
}

2.Create a class called cricketer with member variables to represent name,age and number of matches played.From this class derive two classes Bowler and Batsman.Bowler class has number of wickets as member variable and Batsman class has number of runs and centuries as member variables.Use appropriate member functions in all classes to read and display respective data.
#include <iostream>
using namespace std;
class cricketer
{
protected:
    char name[10];
    int age, number;

public:
    void get()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the number of match played: ";
        cin >> number;
    }
    void dis()
    {
        cout << "Name of the cricketer is " << name << endl;
        cout << "Age of the cricketer is " << age << endl;
        cout << "Number match played is " << number << endl;
    }
};
class bowler : public cricketer
{
protected:
    int wkt;

public:
    void wkts()
    {
        get();
        cout << "Enter number of wkt taken :";
        cin >> wkt;
    }
    void diswkt()
    {
        dis();
        cout << "Number of wkt taken is " << wkt << endl;
    }
};
class batsman : public cricketer
{
protected:
    int run, century;

public:
    void runs()
    {
        get();
        cout << "Enter the run scored by the batsman: ";
        cin >> run;
        cout << "Enter the century by the batsman: ";
        cin >> century;
    }
    void disrun()
    {
        dis();
        cout << "Number of wkt taken is " << run << endl;
        cout << "Number of century is " << century << endl;
    }
};
int main()
{
    bowler b1;
    batsman b2;
    cout << "........Details of Bowler....... \n"
         << endl;
    b1.wkts();
    cout << endl;
    b1.diswkt();
    cout << "........Details of Batsman....... \n"
         << endl;
    b2.runs();
    cout << endl;
    b2.disrun();
    return 0;
}


4.Create a class student with data members studentID and name.Create class internal_exam with internal_marks as data member and external_exam that has external_marks as data members that will inherit student class.Create class result by inherting class internal_exam and external_exam that will add marks of class internal_exam and external_exam.Use virtual base class when required.
#include <iostream>
using namespace std;
class student
{
    char name[10];
    int id;

public:
    void get1()
    {
        cout << "Enter the name and id of the student: ";
        cin >> name >> id;
    }
    void dis1()
    {
        cout << "Name of the student is " << name << " with id " << id << endl;
    }
};
class intmark : virtual public student
{
        float int1;
public:
    int get2()
    {
        cout << "Enter the internal marks: ";
        cin >> int1;
        return int1;
    }
};
class extmark : virtual public student
{
        float int2;
public:
    int get3()
    {
        cout << "Enter the external marks: ";
        cin >> int2;
        return int2;
    }
};
class result : public intmark, public extmark
{
    float total;
public:
    void show()
    {
        get1();
        total = get2()+get3();
        dis1();
        cout << "The total marks is " << total << endl;
    }
};
int main()
{
    result r1;
    r1.show();
    return 0;
}

// FIle Handling: 
//3.WAP to store book database in a file.Design a book class with members ISBN number,name of author,title,price.The program should able to store book object to a file,Find a book in the database and display according to ISBN number.Also display all records.Also check for possible condition if file doesnt exist or cannot open.
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class student{
    char name[9];
    int id,age;
    public: 
    void get(){
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Id:";
        cin>>id;
        cout<<"Enter the Age:";
        cin>>age;
    }
    void show(){
        cout<<"Name is "<<name<<endl;
        cout<<"Id is "<<id<<endl;
        cout<<"Age is "<<age<<endl;
    }
    void input(){
            ofstream xyz("stuu.txt",ios::binary|ios::app);

            get();
            xyz.write(reinterpret_cast<char *>(this),sizeof(*this));
    }
    void showrecord(){        
        ifstream sh("stuu.txt",ios::binary|ios::in);
        if(!sh){
            cout<<"File not found"<<endl;
        }
        cout<<".....Data from the File......"<<endl;
        while(!sh.eof()){
            if(sh.read(reinterpret_cast<char *>(this),sizeof(*this)>0)){
                show(); 
            } 

            
        }
    }
    void readonfile(){
        int search;
        int chk=0;
        ifstream sh("stuu.txt",ios::binary|ios::in);
        cout<<"ID to search: ";
        cin>>search;
        while(!sh.eof()){
             if(sh.read(reinterpret_cast<char*>(this),sizeof(*this)>0)){
                if(search==id){
                    chk =1;
                    show();
                    break;
                }
            }
        }
        if(chk==0){
                cout<<"No data found"<<endl;
        }
    }
};
int main(){
        student o;
        int n;
        char x;
        while(1){
		
	        cout<<"1 Input data "<<endl;
	        cout<<"2 Specific data "<<endl;
	        cout<<"3 Exit"<<endl;
	        cout<<"Enter the mode: ";
	        cin>>n;
	        switch(n){
	            case(1):
	            while(x!='n'){
	                o.input();
	                cout<<"Want to add more data(Y/N)?";
	                cin>>x;
	            }	 
				o.showrecord();
	            break;  
	            case(2):
	            o.readonfile();
                break;
	            case(3):
	                exit(0);
	            default:            
	                cout<<"ENTER number between 1 - 3";
	                break;
	        }
	   }
	   

    return 0 ;
    
}

// Template
// Number 1;
#include<iostream>
#include<string.h>
using namespace std;
template<class num>
num compare(num x, num y){
    if (x>y){
        return x;
    }
    else 
        return y;
}

char *compare(char  *A, char *B){
    char *result;
    if (strcmp(A,B)>0){
        result = A;
    }
    else 
        result = B;
    return result;
}
int main()
{
    int a,b;
    char p,q;
    float x,y;
    string m,n;
    cout<<"Enter all the data"<<endl;
    cin>>a>>b>>p>>q>>x>>y>>m>>n;
    cout<<"Largest integer number is "<<compare(a,b)<<endl;
    cout<<"Largest character is "<<compare(p,q)<<endl;
    cout<<"Largest floating point number is "<<compare(x,y)<<endl;
    cout<<"Largest string is "<<compare(m,n)<<endl;
    return 0;
} 

// Error handling
// number 3
#include<iostream>
using namespace std;
int main()
{
    float a, b;
    cout<<"Enter the values of a and b: ";
    cin>>a>>b;
    float x=a-b;
    try {
        if(x!=0)
            cout<<"Result a/x = "<<a/x<<endl;
        else
            throw x; 
    }
    catch(int p){
            cout<<"DIVIDE by 0 occured"<<endl;

    }
    return 0 ;
}

// WAP to compute sq root of a number. The input value must be tested for validoty. if it is negative an exception must be raised.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x;
    cout<<"Enter the number:";
    cin>>x;
    try{
        if(x<0){
            throw x;
        }
        else 
            cout<<"Sq root is "<<sqrt(x)<<endl;
    }
    catch(float x){
        cout<<"NEGATIVE value of x is entered "<<endl;
    }
    return 0 ;
}

*/
#include<iostream>
using namespace std;
int main(){
    char name[10];
    int roll;
    int mark;
        cout<<"Enter name , roll and marks of the student: ";
        cin>>name>>roll>>mark;
        cout<<"Name is "<<name<<endl;
        try{
            if (roll<0){
                throw roll;
            }
            else 
                cout<<"Roll is "<<roll<<emdl;;
             
        }

    catch (int roll){
        cout<<"-ve roll"<<endl;
    }
    try{
        if(mark>100){
            throw mark;
        }
        else   
            cout<<"Mark obtained is "<<mark<<endl;  
    }
    catch(int mark){
        cout<<"-ve mark "<<endl;
    }
    
    return 0 ;
}