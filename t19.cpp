#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// copy constructor 

class number
{
    int a,b;
    public:
        number(){}
        number(int a1,int b1)
        {
            a=a1;
            b=b1;
        }
        number(number &obj)
        {   cout<<"copy"<<endl;
            a=obj.a;
            b=obj.b;
        }
        void show()
        {
            cout<<"Numbers are : "<<a<<" "<<b<<endl;
        }
};

int main()
{
    number n1(10,12);
    n1.show();
    number n2=n1;     //copy constructor declaration
    n2.show();
    number n3(n1);    // another method of declaring copy constructor 
    
    return 0;
}
