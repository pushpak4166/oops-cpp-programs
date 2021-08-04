#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class complex1
{
    int a,b;
    public:
        complex1()  // default constructor
        {
            a=0;
            b=0;
        }
        complex1(int ,int);   // parameterized constructor 

        void printdata()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

complex1 :: complex1(int a1,int b1)
{
    a=a1;
    b=b1;
}

int main()
{
    complex1 c;
    complex1 c1(1,2);
    c.printdata();
    c1.printdata();
    return 0;
}