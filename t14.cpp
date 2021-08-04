#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class complex1;

class cal
{
    public:
        int add(int a,int b)
        {
            return a+b;
        }
        int sumrealcomplex1(complex1,complex1);
};

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
    //friend int cal :: sumrealcomplex1(complex1 ,complex1 );     
    friend class cal;
};

int cal :: sumrealcomplex1(complex1 o1,complex1 o2)
{
    return (o1.a+o2.a);
}

int main()
{
    complex1 c1,c2;
    c1.setdata(1,2);
    c2.setdata(3,4);
    cal c3;
    int res = c3.sumrealcomplex1(c1,c2);
    cout<<res<<endl;
    return 0; 
}
