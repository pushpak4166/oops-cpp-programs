#include<iostream>
using namespace std;

int _a=10;

void sum()
{
    cout<<_a<<endl;
}

int main()
{
    int _a=20;
    sum();
    cout<<::_a;
}