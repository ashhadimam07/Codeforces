#include <iostream>
using namespace std;

int main()
{
    string t="hello";
    string s;
    cin>>s;
    int c=0,j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[j])
        {
            j++;
            c++;
        }
    }
    if(c==5)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
