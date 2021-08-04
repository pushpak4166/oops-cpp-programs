#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
#include<fstream>

using namespace std;

// This pointer

class A
{
    int a;
    public:
        void setdata(int a)
        {
            this->a=a;
        }

        void getdata()
        {
            cout<<"Value : "<<a<<endl;
        }
};

int main()
{
    A a;
    a.setdata(2);
    a.getdata();
    return 0;
}