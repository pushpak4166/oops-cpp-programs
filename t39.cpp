#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include<cmath>


using namespace std;

void divide(int a,int b,int c)
{
    if((a-b)!=0)
    {   
        cout<<(float(c))/(float(a-b))<<endl; 
    }
    else
        throw 'E';
}
int main()
{
    cout<<"Main function"<<endl;
    try
    {
        //divide(4,6,7);
        divide(4,4,9);
    }
    catch(char s)
    {
        cout<<"Exception Occured: "<<s<<endl;
    }

    string s="Hello world";
    cout<<s;
    
    return 0;
}