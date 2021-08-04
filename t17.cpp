#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class point
{
    int x,y;
    public:
        point(int a,int b)
        {
            x=a; y=b;
        }
        void disp()
        {
            cout<<x<<" "<<y<<endl;
        }
        friend float distance(point,point);
};

float distance(point p1,point p2) 
{
    float res;
    res=sqrt( (pow((p1.x-p2.x),2)) + (pow((p1.y-p2.y),2)) );
    return res;
}

int main()
{
    point p1(2,3);
    point p2(4,5);

    p1.disp();
    p2.disp();

    float r=distance(p1,p2);
    cout<<"Distance : "<<r<<endl;
    return 0; 
} 