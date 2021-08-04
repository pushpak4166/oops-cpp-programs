#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class base1
{
    protected:
        int base1int;
    public:
        void setdata1(int a)
        {
            base1int=a;
        }
};

class base2
{
    protected:
        int base2int;
    public:
        void setdata2(int a)
        {
            base2int=a;
        }
};

class derived : public base1, public base2
{
    public:
        void show()
        {
            cout<<base1int<<" "<<base2int<<" "<<endl;
        }
};

int main()
{
    derived der;
    der.setdata1(24);
    der.setdata2(3); 
    der.show();
    
    return 0;
}