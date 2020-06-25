#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t="";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
    int i=0;
    while(i<s.size())
    {
       if(s[i]!='a'&&s[i]!='y'&&s[i]!='e'&&s[i]!='u'&&s[i]!='i'&&s[i]!='o')
       {
           t=t+"."+s[i];
       }
       i++;
    }
    cout<<t;
    return 0;
}
