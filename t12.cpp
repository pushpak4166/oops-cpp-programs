#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class complex1
{
    int a;
    int b;
    
    public:
        void setdata()
        {
            cout<<"Enter the real and img part"<<endl;
            cin>>a>>b;
        }
        void printdata()
        {
            cout<<a<<"+"<<b<<"i"<<endl;
        }
        void sumofcomplex(complex1 o1,complex1 o2)
        {
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
};

int main()
{
    complex1 c1,c2,c3; 
    c1.setdata();
    c1.printdata();
    c2.setdata();
    c2.printdata();

    c3.sumofcomplex(c1,c2);
    cout<<"Addition :"<<endl;
    c3.printdata();
    return 0;
}