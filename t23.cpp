#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class student 
{   protected:
        int roll_no;
    public:
        void set_roll(int r)
        {
            roll_no=r;
        }
        void get_roll()
        {
            cout<<"Roll No: "<<roll_no<<endl;
        }
};

class exam : public student 
{
    protected:
        float maths,phy;
    public:
        void setmarks(float a,float b)
        {
            maths=a; phy=b;
        }
        void getmarks()
        {
            cout<<"Maths : "<<maths<<"   Physics : "<<phy<<endl; 
        }
};

class result : public exam
{
    int percetage;
    public:
        void disp()
        {
            cout<<"Result : "<<(maths+phy)/2<<endl;
        }
};


int main()
{
    result ram;
    ram.set_roll(52);
    ram.setmarks(91,92);
    ram.get_roll();
    ram.getmarks();
    ram.disp(); 

    return 0;
}