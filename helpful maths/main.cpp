#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c1=0;
    int c2=0;
    int c3=0;
    int i=0;
    while(i<s.size())
    {
        if(s[i]=='1')
        {
            c1++;
        }
        else if(s[i]=='2')
        {
            c2++;
        }
        else
        {
            c3++;
        }
        i=i+2;
    }
    string h="";
    while(c1--)
    {
        h+="1";
        if(h.size()==s.size())
        {
            break;
        }
        h+="+";
    }
    while(c2--)
    {
        h+="2";
        if(h.size()==s.size())
        {
            break;
        }
        h+="+";
    }
    while(c3--)
    {
        h+="3";
        if(h.size()==s.size())
        {
            break;
        }
        h+="+";
    }
    cout<<h;
}
