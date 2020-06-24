#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string h="WUB";
    int i=0,j=0;
    int c=0;
    string str="";
    while(i<s.size() && j<h.size())
    {
        if(s[i]==h[j])
        {
          c++;

          j++;

          i++;

          if(c<3 && i>=s.size())
          {
              i=i-c;
              c=0;
          }
          if(c==3)
          {
              c=0;
              j=0;
              if(str!="")
              {
                  str=str+" ";
              }
          }

        }
        else
        {
            if(c<3)
            {
                i=i-c;
                c=0;
                j=0;
            }
            str=str+s[i];
            i++;
        }
    }
    cout<<str;
    return 0;
}
