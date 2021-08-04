#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
#include<fstream>

using namespace std;

template <class T>

class Vector 
{
    public:
        T* arr;
        int size;
        Vector(int m)
        {
            size=m;
            arr= new T[size];
        }
        T dotproduct(Vector &v)
        {
            T d=0;
            for(int i=0;i<size;i++)
            {
                d=d+ this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main()
{
    // Vector <float> v1(3);
    // v1.arr[0]=4.1;
    // v1.arr[1]=3.2;
    // v1.arr[2]=2.3;
    // Vector <float> v2(3);
    // v2.arr[0]=1.9;
    // v2.arr[1]=0.8;
    // v2.arr[2]=1.45;

    // float res= v1.dotproduct(v2);

    // cout<<res<<endl;

    Vector <int> v1(3);
    v1.arr[0]=4;
    v1.arr[1]=3;
    v1.arr[2]=2;
    Vector <int> v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;

    int res1= v1.dotproduct(v2);

    cout<<res1<<endl;
    return 0;

}