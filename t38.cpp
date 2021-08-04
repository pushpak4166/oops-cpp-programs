#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
#include<fstream>

using namespace std;

int main()
{
    try
    {
        int i=3;
        if(i==1)
        {
            throw 1;
        }
        // if(i==2)
        // {
        //     throw 2;
        // }
        if(i==3)
        {
            throw 3;
        }
    }
    catch(...)
    {
        cout<<"Exception : "<<endl;
    }
    return 0;
}