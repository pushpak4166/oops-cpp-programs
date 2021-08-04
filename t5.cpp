#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct employee
{
    int id;
    string name;
    int age;
} label;

union money
{
    int rupees;
    int rice_kg;
};


int main()
{
    label ram;

/*     cout<<"Enter id: "<<endl;
    cin>>ram.id;
    cout<<"Enter name: "<<endl;
    cin>>ram.name;
    cout<<"Enter age: "<<endl;
    cin>>ram.age;

    cout<<ram.name<<endl<<ram.id<<endl<<ram.age<<endl; */

    union money m;
    m.rupees=10;
    m.rice_kg=20;
    cout<<m.rupees<<endl;   
    cout<<m.rice_kg;
    return 0;
}
