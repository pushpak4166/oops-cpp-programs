#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class binary
{
    string s;
    
    public:
        void read();
        void check_bin();
        void complement();
        void display();
};

void binary :: read()
{
    cout<<"Enter the number: "<<endl;
    cin>>s;
}

void binary :: check_bin()
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='0' && s[i]!='1')
        {
            cout<<"Not binary"<<endl;
            exit(0);
        }   
    }

}

void binary :: complement()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='1')
            s.at(i)='0';
        else    
            s.at(i)='1';
    }
    
}

void binary :: display()
{
    cout<<"string : "<<endl<<s<<endl;
}

int main()
{
    binary b;
    // b.s = "100101"; this will show error as by default it is private 
    b.read();
    b.check_bin();
    b.display();
    b.complement(); 
    b.display();
    return 0;
}