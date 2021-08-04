#include <bits/stdc++.h>
using namespace std;
  
void countWords(string str)
{
    // breaking input into word using string stream
    stringstream s(str); // Used for breaking words
    string word; // to store individual words
  
    int count = 0;
    while (s >> word)
    {
        count++;
        cout<<word<<endl;
    }    

    cout<<"Count: "<<count<<endl;
}
  
// Driver code
int main()
{
    string s = "geeks for geeks contribution placements";
    // vector<int> v={1,2,3};
    // reverse(v.begin(),v.end());
    // for(int i=0;i<v.size();i++)
    //     cout<<v[i]<<" ";

    countWords(s);
    return 0;
}