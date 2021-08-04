#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
#include<fstream>

using namespace std;

int main()
{
    string s1="Hello abcd";
    string s2;
    // opening and writing into the file 
    ofstream out("t28a.txt");
    out<<s1;
    out.close();

    // opening and reading from the file 
    ifstream in("t28a.txt");
    getline(in,s2);
    cout<<s2;
    in.close();

    return 0;
}