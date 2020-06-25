#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    long long ans;
    cin>>n;
    if(n>=0)
    {
        ans=n;
    }
    else
    {
        long long k;
        long long m=-n;
        long long p=-n;
        k=m%10;
        m=m/10;
        if(m)
        {
           m=-m;
        }
        p=p/100;
        p=(p*10)+k;
        if(p)
        {
          p=-p;
        }
        if(m>p)
        {
            ans=m;
        }
        else
        {
            ans=p;
        }
    }
    cout<<ans;
    return 0;
}
