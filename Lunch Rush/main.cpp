#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long k,f,t;
    cin>>k;
    long long joy=INT_MIN;
    while(n--)
    {
        cin>>f>>t;
        long long ans;
        if(t>k)
        {
            ans=f-(t-k);
        }
        else
        {
            ans=f;
        }
        if(ans>joy)
        {
            joy=ans;
        }
    }
    cout<<joy;
    return 0;
}
