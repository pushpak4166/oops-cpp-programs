#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b)
{   
    cout<<"first"<<endl;
    return a+b;
}

int sum(int a,float b)
{
    cout<<"second"<<endl;
    return float(a+b);
}

int main()
{
    int x=2,y=3;
    float z=2.5;
    cout<<sum(x,y)<<endl<<sum(x,z)<<endl;

    return 0;
}