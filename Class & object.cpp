 /*
//Wap to create a class named 'emplpoye' with name, id,salary as data member & getdata(), dusplaydata() as member functions to read data of n employee
#include<iostream>
#include<string.h>
using namespace std;
class employee{
    private:
        char empname[25];
        int empid;
        float empsalary;
    
    public:
        void getdata(char name[25], int id, float salary){
                strcpy(empname,name);
                empid=id;
                empsalary=salary;
        }
        void displaydata(){
            
            cout<<"Name of the emplpyee is "<<empname<<endl;
            cout<<"Id of the emplpyee is "<<empid<<endl;
            cout<<"Salary of the emplpyee is "<<empsalary<<endl;
        }
}e[25];

int main(){
    //employee e[25];
    int i,n,id;
    char name[25];
    float salary;
    cout<<"Enter the number of employees: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the name of the employee : ";
        cin>>name;
        cout<<"Enter the id of the employee: ";
        cin>>id;
        cout<<"Enter the salary of the employee: ";
        cin>>salary;
        e[i].getdata(name,id,salary);
        cout<<endl;
        e[i].displaydata();

    }
    return 0;
} 
*/
// WAP to create a class name animal with name, price & it as data members.
#include<iostream>
#include<string.h>
using namespace std;
class animal{
    private:
        char name[10];
        float price;
        int id;

    public:
        animal(){
            cout << "default constructor called" << endl;
            strcpy(name,"dog");
            price=100.00;
            id=123;
        }
        animal(char n[10], float p,int i){
            strcpy(name,n);  //para
            price=p;
            id=i;
        }
        animal(animal &a){
            strcpy(name,a.name);
            id=a.id;
            price=a.price;
        }
        void output(){
            cout<<"Name "<<name<<endl;
            cout<<"Id "<<id<<endl;
            cout<<"Price "<<price<<endl;
        }
};
int main(){
   animal x;
   animal y("fox",3000,1);
   animal z(x);
   x.output();
   y.output();
   z.output(); 
   return 0;
}
/*
#include<iostream>
//#include<string.h>
using namespace std;
class distance{
    private:
        int feet, inch;

    public:
    void add(int a, int b){
        feet= a+b;
    }
    void add2(int c, int d){
        inch=c+d;
    }
    void display(){
        if (inch>=12){
            feet += inch/12;
            inch = inch%12;
            cout<<"Sum of distance is: "<<feet<<" feet "<<inch<<" inch"<<endl;
        }
        else
            cout<<"Sum of distance nis: "<<feet<<" feet"<<inch<<" inch"<<endl;
    }
}d;
int main(){
    int feet1 ,inch1,feet2, inch2;
    cout<<"Enter the first length: ";
    cin>>feet1>>inch1;
    cout<<"Enter the second length: ";
    cin>>feet2>>inch2;
    d.add(feet1,feet2);
    d.add2(inch1,inch2);
    d.display();
    return 0;

} */