#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    unordered_set<char> m;
    int c=0,i=0;
    while(i<s.size())
    {
        if(s[i]==',' || s[i]=='{' || s[i]=='}')
        {
            i++;
        }
        else if(s[i]==' ')
        {
            i++;
        }
        else if(m.find(s[i]) != m.end())
        {
            i++;
        }
        else
        {
            m.insert(s[i]);
            c++;
            i++;
        }
    }
    cout<<c;
    return 0;
}
