#include <bits/stdc++.h>
#include <math.h>
#include <iostream>

using namespace std;

// finding frequency and the maximum frequency of array elements

void frequency(int arr[],int n)
{
    unordered_map<int,int> m;
    // calculating key(element) --> value(element's frequency)
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }

    for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<" "<<(*i).second<<endl;
    }

    int max1=INT_MIN;
    for(auto i=m.begin();i!=m.end();i++)
    {
        max1=max(max1,i->second);
    }
    cout<<"Maximum freq: "<<max1<<endl;
}

int main()
{
    int a[100];
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Enter the array: "<<endl;
    
    for(int i=0;i<n;i++)
        cin>>a[i];

    frequency(a,n);  // calling the frequency calculating function

    return 0;
}