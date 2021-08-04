#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Dynamic initialization of the objects 
// Here initial value of the object can be provided during run time

class bank
{
    int principle;
    int year;
    float rate;
    float final;
    public:
        bank(){}
        bank(int p,int n,int R);
        bank(int p,int n,float r);
        void show()
        {
            cout<<"Amount : "<<final<<endl;
        }
    
};

bank :: bank(int p,int n,int R)
{
    principle=p;
    year=n;
    rate=float(R)/100;
    final=p;

    for(int i=0;i<year;i++)
    {
        final=final*(1+rate); 
    } 
}

bank :: bank(int p,int n,float r)
{
    principle=p;
    year=n;
    rate=r;
    final=p;

    for(int i=0;i<year;i++)
    {
        final=final*(1+rate); 
    } 
}

int main()
{
    bank b1,b2;
    int p,n,R;
    float r;
    cout<<"Enter the p n R : "<<endl;
    cin>>p>>n>>R;

    b1 = bank(p,n,R);
    b1.show();

    cout<<"Enter the p n r : "<<endl;
    cin>>p>>n>>r;

    b2 = bank(p,n,r);
    b2.show();

    return 0;
}