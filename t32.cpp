#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
#include<fstream>

using namespace std;

class base
{   public:
        int b1;
        void getdata()
        {
            cout<<"base class"<<endl;
        }
    
};

class derived : public base
{
    public:
        int d1;
        void getdata()
        {
            cout<<"derived class"<<endl;
        }
};

int main()
{
    base *base_ptr;
    base obj_base ;
    derived obj_der;
    base_ptr= &obj_der;  // pointing the base pointer to the derived class object

    base_ptr->b1=30;
    base_ptr->getdata();

    //base_ptr->d1=20;   This will show error

    return 0;
}