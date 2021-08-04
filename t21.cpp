#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Base class
class employee
{   
    public:
        int id;
        float salary;
        employee(){}
        employee(int id1)
        {
            id=id1;
            salary=50.0;
        }
};

// Derived class

class programmer : employee
{
    
    public:
        int lan_code;
        programmer(int id1)
        {
            id=id1;
            lan_code=9;
        }
        int getdata()
        {
            return id;
        }
};

int main()
{
    employee ram(1),sham(2);
    cout<<ram.id<<" Salary :"<<ram.salary<<endl; 
    cout<<sham.id<<" Salary :"<<sham.salary<<endl;
    
    programmer rampro(10);
    // rampro.id;  will show error as visibility mode is private
    cout<<rampro.getdata()<<" language code: "<<rampro.lan_code<<endl; 
    return 0;
}