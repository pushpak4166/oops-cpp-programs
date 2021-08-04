#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count1 = 0;

class num
{
public:
    num()
    {
        count1++;
        cout << "Constructor is called for number: " << count1 << endl;
    }
    ~num()
    {
        cout << "Destructor is called for number: " << count1 << endl;
        count1--;
    }
};

int main()
{
    cout << "start" << endl;
    num n1;
    {
        cout << "enter" << endl;
        cout << "creating objects" << endl;
        num n2, n3;
        cout << "exit" << endl;
    }
    cout << "end of program" << endl;
    return 0;
}