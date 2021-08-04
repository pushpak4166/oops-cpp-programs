#include <iostream>
#include <bits/stdc++.h>
#include<cmath>

using namespace std;

class simplecal
{
    int a,b;
    public:
    
        void getdata1()
        {
            cout<<"Enter a and b: "<<endl;
            cin>>a>>b;
        }
        void operation1()
        {
            cout<<"a+b "<<a+b<<endl;
            cout<<"a-b "<<a-b<<endl;
            cout<<"a*b "<<a*b<<endl;
            cout<<"a/b "<<a/b<<endl;
        }

};

class scientificcal
{   int a,b;
    public:
    
        void getdata2()
        {
            cout<<"Enter a and b: "<<endl;
            cin>>a>>b;
        }
        void operation2()
        {
            cout<<"cos(a) "<<cos(a)<<endl;
            cout<<"sin(b) "<<sin(b)<<endl;
            cout<<"exp(a)"<<exp(a)<<endl;
            cout<<"tan(b) "<<tan(b)<<endl;
        }
};

class hybridcal : public simplecal, public scientificcal
{
  

};

int main()
{

    return 0;
}