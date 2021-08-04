#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void swap(int a,int b)
{ 
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swapPointer(int* a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{   int a=4,b=5;

    //Call by value
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    // Call by reference 
    cout<<a<<" "<<b<<endl;
    swapPointer(&a,&b);
    cout<<a<<" "<<b<<endl;   
    return 0;
}