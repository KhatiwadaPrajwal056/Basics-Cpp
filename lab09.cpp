
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
            ofstream xyz("pk.txt",ios::binary|ios::app);
            get();
            xyz.write(reinterpret_cast<char *>(this),sizeof(*this));
    }
    void showrecord(){        
        ifstream sh("pk.txt",ios::binary|ios::in);
        while(!sh.eof()){
            if(sh.read(reinterpret_cast<char *>(this),sizeof(*this)>0)){
                show(); 
            }  
        }
    };
};
/*
//WAP to create a class student with name, id, age as data members. READ INFORMATION OF STUDENTS & IT IN FILE INTIL USER ENTERS "NO".Finally Read data from file and display them.Also search data in file according to given name by user. Program should be 
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
        while(!sh.eof()){
            if(sh.read(reinterpret_cast<char *>(this),sizeof(*this))>0){
                show(); 
            }  
        }
    }
    void readonfile(){
        char search[9];
        int chk=0;
        ifstream sh("stuu.txt",ios::binary|ios::in);
        cout<<"name to search: ";
        cin>>search;
        while(!sh.eof()){
             if(sh.read(reinterpret_cast<char *>(this),sizeof(*this))>0){
                if(strcmp(search,name)==0){
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
	        cout<<"2 All data "<<endl;
	        cout<<"3 Specific data "<<endl;
	        cout<<"4 Exit"<<endl;
	        cout<<"Enter the mode: ";
	        cin>>n;
	        switch(n){
	            case(1):
	            while(x!='n'){
	                o.input();
	                cout<<"Want to add more data(Y/N)?";
	                cin>>x;
	            }
	            break;  
	            case(2):
	            o.showrecord();
	            case(3):
	            o.readonfile();
	            case(4):
	                exit(0);
	            default:            
	                cout<<"ENTER number between 1 - 4";
	                break;
	        }
	   }

    return 0 ;
}


// Using templete determine the greatest among three numbers.
#include<iostream>
using namespace std;
template<class num>
num compare(num x,num y, num z){
    if (x>y && x>z){
        return x;
    }
    else if(y>x && y>z){
        return y;
    }
    else 
        return z;
}

int main()
{
    float a,b,c;
    cout<<"Enter three number : ";
    cin>>a>>b>>c;
    cout<<"The largest number is "<<compare(a,b,c)<<endl;
    return 0 ;
}


#include<iostream>
using namespace std;
template <class num1>
num1 numax(num1 t[], int n){
    num1 max = t[0];
    for (int i=0;i<n;i++){
        if(max <t[i]){
            max=t[i];
        }
    }
    return max;
}
template<class num2>
num2 numin(num2 x[],int t){
    num2 min =x[0];
    for (int i=0;i<t;i++){
        if (min>x[i]){
            min= x[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout<<"Enter the no of items in array: ";
    cin>>n;
    float numbers[n];
    cout<<"Enter the numbers ::"<<endl;
    for (int i=0;i<n;i++){
        cin>>numbers[i];
    }
    cout<<"largest number is "<<numax(numbers,n)<<endl;
    cout<<"Smallest number is "<<numin(numbers,n)<<endl;
    return 0;

}
*/