#include <bits/stdc++.h>
using namespace std;

// Returning array from the function to main function

int *return_array(int n)
{
    static int arr[10];
    cout<<"Performing array operation in function"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    return arr;
}

int main()
{
    cout<<"Enter the array size: "<<endl;
    int n; cin>>n;
    int *res = return_array(n);
    cout<<"Printing array in main function"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(res++)<<" ";
    }
    cout<<endl;
    return 0;
    
}