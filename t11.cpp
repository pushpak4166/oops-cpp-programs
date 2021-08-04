#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter=0;

    public:
        void ini_counter()
        {
            counter=0;
        }
        void setprice();
        void displayprice();
};

void shop :: setprice()
{
    cout<<"Enter Id:"<<endl;
    cin>>itemid[counter];
    cout<<"Enter price:"<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop :: displayprice()
{
    cout<<"*******"<<endl;
    for(int i=0;i<counter;i++)
    {
        cout<<itemid[i]<<" "<<itemprice[i]<<endl;
    }
}

int main()
{   
    shop dukan;
    //dukan.ini_counter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
    return 0;
}