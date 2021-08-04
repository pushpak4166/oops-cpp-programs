#include <iostream>
#include <bits/stdc++.h>
#include<cmath>

using namespace std;

class base1
{
    public:
        void greet()
        {
            cout<<"Hi"<<endl;
        }
};

class base2
{
    public:
        void greet()
        {
            cout<<"Hello"<<endl;
        }    
};

class derived : public base1, public base2
{   
    public:
        void greet()
        {
           base2 :: greet();
        }
};

int main()
{
    base1 obj1;
    base2 obj2;
    derived d;
    d.greet();   
    return 0;
}