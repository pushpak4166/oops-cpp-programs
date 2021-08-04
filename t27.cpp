#include <iostream>
#include <bits/stdc++.h>
#include<cmath>

using namespace std;

class student
{
    protected:
        int roll_no;
    public:
        void set_roll(int roll)
        {
            roll_no=roll;
        }
        void get_roll()
        {
            cout<<"Roll No: "<<roll_no<<endl;
        }
};

class test: virtual public student
{
    protected:
        int phy,chem;
    public:
        void set_marks(int p,int c)
        {
            phy=p;
            chem=c;
        }
        void get_marks()
        {
            cout<<"Phy: "<<phy<<" "<<"Chem: "<<chem<<endl;
        }
};

class sports : virtual public student
{
    protected:
        int score;
    public:
        void set_score(int sc)
        {
            score=sc;
        }
        void get_score()
        {
            cout<<"Sports score: "<<score<<endl;
        }
};

class result : public test, public sports 
{
    protected:
        int res;
    public:
        void display()
        {
            res=phy+chem+score;

            get_roll();
            get_marks();
            get_score();
            cout<<"********************"<<endl;
            cout<<"Final result: "<<res<<endl;
        }
};

int main()
{
    result ram;
    ram.set_roll(52);
    ram.set_marks(98,99);
    ram.set_score(9);
    ram.display();

    return 0;
}