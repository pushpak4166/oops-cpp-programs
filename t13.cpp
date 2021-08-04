#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class complex1
{
    int a,b;
    public:
        void setdata(int n1,int n2)
        {
            a=n1; b=n2;
        }
        void printdata()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
        friend complex1 sumcomplex(complex1 o1,complex1 o2); // Friend function declaration 
};

// Friendly function
complex1 sumcomplex(complex1 o1,complex1 o2)
{
    complex1 o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    
    return o3;
}

int main()
{   
    complex1 c1,c2,c3;
    c1.setdata(1,2);
    c1.printdata();
    c2.setdata(3,4);
    c2.printdata();

    c3=sumcomplex(c1,c2);
    c3.printdata();
    return 0;    
}