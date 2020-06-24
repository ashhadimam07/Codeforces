#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(n<m && b<n*a)
    {
        cout<<b;
        return 0;
    }
    if(n%m==0)
    {
        if((n*a)<=(n/m)*b)
        {
            cout<<n*a;
        }
        else
        {
            cout<<(n/m)*b;
        }
    }
    else
    {
        int x=n%m;
        int p=n-x;
        if((p*a) <= (n/m)*b)
        {
            int ans=((x*a)<(x*b)?(x*a):(x*b));
            cout<<(p*a)+(ans<m*b)?ans:m*b;
        }
        else
        {
            int ans=((x*a)<(x*b)?(x*a):(x*b));
            cout<<(n/m)*b+(ans<m*b)?ans:m*b;
        }
    }
    return 0;
}
