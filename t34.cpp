#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
#include<fstream>

using namespace std;

class chw
{
    public:
    int rating;
    string title; 
        chw(string s,int r)
        {
            rating=r;
            title=s;
        }
        virtual void display(){cout<<"this"<<endl;}
};

class chw_vid : public chw
{
    public: 
        int vidlen;
        chw_vid (string s,int r,int v): chw(s,r)
        {
            vidlen=v;
        }
        void display()
        {
            cout<<"title : "<<title<<" rating : "<<rating<<" video length : "<<vidlen<<endl;
        }

};

class chw_text : public chw
{
    public: 
        int words;
        chw_text (string s,int r,int w): chw(s,r)
        {
            words=w;
        }
        void display()
        {
            cout<<"title : "<<title<<" rating : "<<rating<<" words : "<<words<<endl;
        }

};

int main()
{   
    chw *ptr[2];

    // // video 
    string title="video best";
    int rating = 5;
    int vidlen= 40; 
    chw_vid obj_vid(title,rating,vidlen);
    // obj_vid.display();

    // // text 
    title="text best";
    rating = 4;
    int words= 566; 
    chw_text obj_text(title,rating,words);
    // obj_text.display();

    ptr[0]=&obj_vid;
    ptr[1]=&obj_text;

    ptr[0]->display();
    ptr[1]->display();

    return 0;

}