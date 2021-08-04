#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
#include<fstream>

using namespace std;

template <class T1, class T2>

class myclass
{   
    T1 data1;
    T2 data2;
    public:
        myclass(T1 a,T2 b)
        {
            data1=a;
            data2=b;
        }
        void disp()
        {
            cout<<data1<<" "<<data2<<endl; 
        }
};

int main()
{
    myclass <double,char> obj(45.667766,6);
    obj.disp();
    return 0;
}