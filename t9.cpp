#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int a1,int b1,int c1);
        void getdata()
        {
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
        }
};

void employee ::setdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    employee ram;
    ram.d=10;
    ram.e=20;
    ram.setdata(1,2,3);
    ram.getdata();
    return 0;
}