#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long a,b;
    while(t--)
    {
       long long ans;
       cin>>a>>b;
       if(a%b==0)
       {
            ans=0;
       }
       else
       {
            int x=a%b;
            ans=b-x;
       }
       cout<<ans<<endl;
    }

    return 0;
}
