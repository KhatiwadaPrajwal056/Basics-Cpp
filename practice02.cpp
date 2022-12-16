 //STATIC VARIABLE
//Static variable initially assigns its value to zero
// if we initialize a value to as a static variable to any one object then another object shares the same value of static.
// It is used by every other objects if created 
// value initializing of static variable is restricted in private of class
/*
#include<iostream>
using namespace std;
class employee{
    string name[0];
    float price[0];
    int n,i;

    static int count;
    public:
        void getdata(){
            cout<<"Enter the number of data : ";
            cin>>n;
            for(i=0;i<n;i++){
                cout<<"Enter the name of iteam "<<count+1<<": ";
                cin>>name[i];
                cout<<"Enter the price: ";
                cin>>price[i];
                count++;
            }
         
        }
        void display(){
            for(i=0;i<n;i++)
            {
                cout<<endl;
                cout<<"Name of iteam "<<i+1<<" is "<<name[i]<<endl;
                cout<<"Price of iteam "<<i+1<<" is "<<price[i]<<endl;
                cout<<endl;
                

            }
        }
        // void countt(){
        //     cout<<"Iteam "<<count<<" = Rs."<<price<<endl;
        // }

}p;
int employee::count;
int main(){
    p.getdata();
    p.display();
    //p.countt();

    //q.countt();
    return 0;






//Array of objects and passing obj in function

#include<iostream>
using namespace std;
class dist2;
class dist1{
    float m,cm;
    public:
        void getdata(float m1,float cm1){
            m=m1;
            cm=cm1;
            // cout<<"Enter M and Cm: ";
            // cin>>m>>cm;
        }
    
    friend void add(dist1, dist2);
};
class dist2{
    float feet,inch;
    public:
        void getdata(float feet1, float inch1){
            feet=feet1;
            inch=inch1;
            // cout<<"Enter feet and inch: ";
            // cin>>feet>>inch;
        }
    
    friend void add(dist1 , dist2 );
};

void add(dist1 p, dist2 q){
    float tm,tcm;
    tm= p.m+ q.feet*0.03;
    tcm= p.cm+ q.inch*2.54;
    cout<<"Total Distance is "<<tm<<"M "<<tcm<<"Cm"<<endl;
    
}
int main(){
    dist1 d1;
    dist2 d2;
    float m1,cm1,feet1,inch1;
    cout<<"Enter m and cm: ";
    cin>>m1>>cm1;
    cout<<"Enter feet and inch: ";
    cin>>feet1>>inch1;
    d1.getdata(m1,cm1);
    d2.getdata(feet1,inch1);
    add(d1,d2);
    return 0;
}   


#include<iostream>
using namespace std;
template<class T>
void display(T data){
    cout<<"Hello"<<endl;
}
template<class T>
void display(T data , int n){
    cout<<"@ hello"<<endl;

}
int main()
{
    display(1);
    display("hello", 5);
    display(0.5);
    return 0 ;
}


#include<iostream>
using namespace std;
class conv{
    float tempr;
    public:
        conv(){
            tempr=0;
        }
        operator float (){
            float tmp;
            tmp=(tempr-32)*5/9;
            return (tmp);
        }
        void display(){
            cout<<" enter Tempr in celcius is ";
            cin>> tempr;
        }

};
int main()
{
    conv c1;
    float fer;
    c1.display();
    fer=c1;
    cout<<"In fer"<<fer;
    return 0 ;
}


#include<iostream>
using namespace std;
class Time{
    int hr,min,sec;
    public:
        Time(){
            hr=0;
            min=0;
            sec=0;
        }
        friend istream& operator>>(istream &is, Time &tm);
        friend ostream& operator<<(ostream &os, Time &tm);

};
istream& operator>>(istream& is, Time &tm){
    is>>tm.hr>>tm.min>>tm.sec;
    return is;

}
ostream& operator<<(ostream& os, Time &tm){
    os<<tm.hr<<tm.min<<tm.sec;
    return os;

}

int main()
{
    Time t;
    cout<<"Enter time: ";
    cin>>t;
    cout<<"TIme is "<<t<<endl;
    return 0 ;
}


#include<iostream>
using namespace std;
class dist2; 
class dist1{
    float m1,cm1;
    public:
        void getdata(){
            cout<<"Enter distance in meter and cm: ";
            cin >> m1>>cm1;
        }
        friend void add(dist1,dist2);
};
class dist2{
    float m2,cm2;
    public:
        void getdata(){
            cout<<"Enter distance in meter and cm: ";
            cin >> m2>>cm2;
        }
        friend void add(dist1,dist2);
};
void add(dist1 d1,dist2 d2){
    float tm,tcm;
    tm=d1.m1+d2.m2;
    tcm=d1.cm1+d2.cm2;
    cout<<"Total distance is "<<tm<<" M "<<tcm<<" CM "<<endl;
}
int main()
{
    dist1 d1;
    dist2 d2;
    d1.getdata();
    d2.getdata();
    add(d1,d2);
    return 0 ;
}
*/
#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;
class student{
    char name[9];
    int id, age;
    public:
        void get(){
            cout<<"enter name ....";
        }
        void show(){
            cout<<"Name is .."<<name<<endl;

        }
        void input(){
            ofstream outfile("abc.dat", ios::binary|ios::app);
            get();
            outfile.write(reinterpret_cast<char*>(this),sizeof(*this));
        }
        void showrecord(){
            ifstream infile("abc.dat",ios::in|ios::binary);
            while(!infile.eof()){
                if(infile.read(reinterpret_cast<char*>(this),sizeof(*this))>0){
                    show();
                }
            }
        }
        void search(){
            char search[9];
            int chk=0;
            ifstream sh("abc.dat",ios::in|ios::binary);
            cout<<"Name to search";
            cin>>search;
            while(!sh.eof()){
                if(sh.read(reinterpret_cast<char*>(this),sizeof(*this))>0){
                    if(strcmp(search,name)==0){
                        chk=1;
                        show();
                        break;


                    }
                }

            }
            if(chk==0){
                cout<<"no data found";
            }
        }
        void modify(){
            int i,n;
            ifstream in("abc.dat",ios::in|ios::binary);
            show();
            in.seekg(0);
            while(in.read((char*)this,sizeof(*this))){
                i++;
            
            }
            in.close();
            cout<<"number to modify";
            cin>>n;
            if(n>0&&n<=i){
                fstream infile("abc.dat",ios::in|ios::out|ios::binary);
                get();
                infile.seekp((n-1)*sizeof(*this));
                infile.write(reinterpret_cast)
            }



        }
        void del(){
            
        }

};
int main()
{
    return 0 ;
}


