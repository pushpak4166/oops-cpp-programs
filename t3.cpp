#include<iostream>
using namespace std;

int main()
{   
    int a=4;
    int b=2;
    int *q=&b;
    int *p=&a;    // p as a pointer of a
    int **p1=&p;   // pointer to pointer 
    cout<<"address of a:"<<p<<" "<<&a<<endl;
    cout<<"Value of a:"<<*p<<" "<<a<<endl; 
    cout<<"address of b:"<<q<<" "<<&b<<endl;
    cout<<"address of p:"<<p1<<" "<<&p<<endl;
    cout<<"Value of p:"<<*p1<<" "<<p<<endl;     
    return 0;
}