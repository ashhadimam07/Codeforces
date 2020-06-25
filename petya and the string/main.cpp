#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool comp (char c1, char c2)
{
    return std::tolower(c1)>std::tolower(c2);
}
int main()
{
    string s,t;
    cin>>s>>t;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(t.begin(),t.end(),t.begin(),::tolower);
    bool res = lexicographical_compare(s.begin(),s.end(),t.begin(),t.end());
    if(res)
    {
        cout<<"-1";
    }
    else
    {
        bool ans = lexicographical_compare(s.begin(),s.end(),t.begin(),t.end(),comp);
        if(ans)
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }
    return 0;
}
