/*
#include <iostream>
#include <string>
using namespace std;
class hello
{
private:
    string a;

public:
    void getdata(void)
    {
        cout << "Enter a binary number: ";
        cin >> a;
    }
    void check(void)
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a.at(i) != '0' && a.at(i) != '1')
            {
                cout << "Not a binary number" << endl;
                exit(0);
            }
            else
            {
                cout << "Binary number " << endl;
                exit(0);
            }
        }
    }
    void ones(void)
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a.at(i) == '0')
            {
                a.at(i) = '1';
            }
            else if (a.at(i) == '1')
            {
                a.at(i) = '0';
            }
        }
    }
    void display(void)
    {
        //cout<<"Ones complement is "<<a<<endl;
        for (int i = 0; i < a.length(); i++)
        {
            //     cout<<"Its ones complement is "<<a.at(i)
            cout << "Ones complement is " << a.at(i) << endl;
        }
    }
};
int main()
{
    hello cls;
    cls.getdata();
    cls.check();
    cls.ones();
    cls.display();
    return 0;
}


#include<iostream>
using namespace std;
class unknown{
    string name[10];
    float price[9];
    int n;
    public:
        void getdata(){
            cout<<"Enter the number of items: ";
            cin>>n;
            cout<<endl;
            for(int i=0;i<n;i++){
                cout<<"Enter the name of the item "<<i+1<<":";
                cin>>name[i];
                cout<<"Enter the price of the item: ";
                cin>>price[i];
                cout<<endl;
            }
        }
        void display(){
            for(int i=0;i<n;i++){
                cout<<"Price for the "<<name[i]<<" is "<<price[i]<<endl;
            }
        }
}p;
int main(){
    p.getdata();
    p.display();
    return 0;

}



#include<iostream>
#include<string.h>

using namespace std;

class depart{
    int did;
    char dname[25];
    static int count;

    public:
        depart(){
            did = 550;
            strcpy(dname, "Prashant");
            cout<<"---------DEFAULT--------"<<endl;
            cout<<"Object id: "<<did<<endl<<"Name: "<<dname<<endl;
            count++;
        }

        depart(int id, char name[25]){
            did = id;
            strcpy(dname, name);
            cout<<endl<<"---------PARAMETER--------"<<endl<<"ObjectID: "<<did<<endl<<"NAME: "<<dname<<endl;
            count++;
        }

        static void displayCount(){
            cout<<"Count= "<<count<<endl;
        }

        ~depart(){
            cout<<endl<<"Object "<<count<<" DESTROYED!" ;
            count--;;

        }
};

int depart::count;

int main(){
   // cout<<"Object 1 Called"<<endl;
    depart ob1;
    depart::displayCount();

    int idd;
    char nname[25];
    cout<<endl<<"Enter the object ID:: ";
    cin>>idd;
    cout<<"Enter the name:: ";
    cin>>nname;
   // cout<<endl<<"Object 2 CALLED"<<endl;
    depart ob2 = depart(idd, nname);
    depart::displayCount();

    return 0;
}

#include<iostream>
using namespace std;
class derived;
class base{
    protected:
    int a,b,c,d;
    public:
        void get(){
            cout<<"Enter two coordinates: ";
            cin>>a>>b;
            cout<<"Enter two coordinates: ";
            cin>>c>>d;
        }
    friend void display();
};
class derived:public base{
    public:
        int x,y;
        void add(){
            x= a+c;
            y= b+d;
        }
};
void display(derived p){
    cout<<"Sum of two coordinate is ("<<p.x<<","<<p.y<<")"<<endl<<endl;

}
int main(){
    derived o1;
    o1.get();
    o1.add();
    display(o1);
    return 0;

}*/
#include <iostream>
using namespace std;
class complex
{
protected:
    float real;
    float img;

public:
    void getcomplex()
    {
        cout << "\nEnter real and imaginary numbers:";
        cin >> real >> img;
    }
};
class add_complex : public complex
{
private:
    float real1;
    float img1;

public:
    void getnew()
    {
        cout << "\nEnter real and imaginary numbers:";
        cin >> real1 >> img1;
    }
    void add()
    {
        float sum_real;
        float sum_img;
        sum_real = real + real1;
        sum_img = img + img1;
        cout << "Sum:" <<sum_real<<sum_img<<endl;
    }
    friend class sub_complex;
};
class sub_complex
{
private:
    float real2;
    float img2;

public:
    void getnew()
    {
        cout << "\nEnter real and imaginary numbers:";
        cin >> real2 >> img2;
    }
    void sub(add_complex c1)
    {
        float diff_real;
        float diff_img;
        diff_real = c1.real - real2;
        diff_img = c1.img - img2;
        cout << "Difference: "<< diff_real<<diff_img<<endl;
    }
};
int main()
{
    add_complex c1;
    sub_complex c2;

    c1.getcomplex();

    c1.getnew();
    c1.add();

    c2.getnew();
    sub(c1);
    return 0;
}