#include<bits/stdc++.h>
using namespace std;

int main()
{
     long long n,m,pmax,pmin,x;
    cin>>n>>m;
    pmax=(n-m+1)*(n-m)/2;
    if(n%m==0)
    {
        x=n/m;
        pmin=((x*(x-1))/2)*m;
    }
    else
    {
        x=(n/m);
        cout<<x<<endl;
        pmin=((x*(x-1))/2)*(m-(n%m));
        pmin+=(((x+1)*x)/2)*(n%m);
    }
    cout<<pmin<<" "<<pmax<<endl;
    return 0;
}
