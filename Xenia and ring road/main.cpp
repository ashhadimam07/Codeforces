#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long ar[m];
    for(int i=0; i<m;i++)
    {
        cin>>ar[i];
    }
    long long ans=0;
    int now=1;
    for ( int i=0; i<m; i++ )
    {
        if ( ar[i]==now )
            continue;
        if ( ar[i]>now )
        ans+=ar[i]-now;
        if ( ar[i]<now )
        ans+=ar[i]+(n-now);
        now=ar[i];
    }
    cout<<ans;
    return 0;
}
