#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
#include<fstream>

using namespace std;

class complex1 
{
    int r,i;
    public:
        void setdata(int a,int b)
        {
            r=a; i=b;
        }
        void getdata()
        {
            cout<<r<<"+"<<i<<"i "<<endl;
        }
};

int main()
{   int size=5;
    complex1 *ptr = new complex1[size];
    complex1 *temp = ptr;

    for(int i=0;i<size;i++)
    {   int a,b;
        cout<<"Enter real and img :  "<<endl;
        cin>>a>>b;
        ptr->setdata(a,b);
        ptr++;
    }
    for(int i=0;i<size;i++)
    {   
        temp->getdata();
        temp++;
    }

    return 0;
}