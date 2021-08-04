#include<iostream>
#include<fstream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream out;
    out.open("t28a.txt");
    out<<"This is me 1\n";
    out<<"This is me 2\n";
    out<<"This is me 3\n";
    out<<"This is me 4\n";
    out.close();

    ifstream in;
    in.open("t28a.txt");
    string s;
    while(in.eof() ==0)
    {
        getline(in,s);
        cout<<s<<endl;
    }

    in.close();


    return 0;

}