#include <iostream>
using namespace std;

int main()
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
       cin>>s;
       int count=s.size();
       if(count>10)
       {
           cout<<s[0]<<s.size()-2<<s[s.size()-1];
       }
       else
       {
           cout<<s;
       }
       cout<<endl;
    }


    return 0;
}
