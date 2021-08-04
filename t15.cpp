#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Exchanging the data of the classes

class Y;

class X
{
    int val1;
    public:
        void setdata(int a)
        {
            val1=a;
        }
        void display()
        {
            cout<<val1<<endl;
        }
        friend void swap(X &,Y &);    
};

class Y
{
    int val2;
    public:
        void setdata(int a)
        {
            val2=a;
        }
        void display()
        {
            cout<<val2<<endl;
        }
        friend void swap(X &,Y &);
};

void swap(X &o1,Y &o2)
{
    int temp=o1.val1;
    o1.val1=o2.val2;
    o2.val2=temp;
}

int main()
{
    X c1;
    Y c2;
    c1.setdata(3);
    c2.setdata(5);

    swap(c1,c2);
    c1.display();
    c2.display();
    return 0;
}