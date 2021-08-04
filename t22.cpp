#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Base
{
    int data1;
    public:
    int data2;
        void setdata(int ,int );
        int getdata1();
        int getdata2();
};

void Base :: setdata(int a,int b)
{
    data1=a;
    data2=b;
}

int Base :: getdata1()
{
    return data1;
}

int Base :: getdata2()
{
    return data2;
}

class Derived : public Base
{
    int data3;
    public:
        void process();
        void disp();
};

void Derived :: process()
{
    data3 = data2*getdata1(); 
}

void Derived :: disp()
{
    cout<<"Data1 "<<getdata1()<<endl<<"Data2 "<<data2<<endl<<"Data3 "<<data3<<endl;
}

int main()
{
    Derived der;
    int a;
    int b;     
    cout<<"Enter :"<<endl;
    cin>>a>>b;   
    der.setdata(a,b); 
    der.process();
    der.disp();
    
    return 0;

}
