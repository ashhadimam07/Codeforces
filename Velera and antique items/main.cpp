#include<bits/stdc++.h>
using namespace std;
bool sell[51]={false};
int main()
{
    int n,k;
    cin>>n>>k;
    int c=0;
    int i=1;
    while(i<=n)
    {
        int p,s,f=1;
        cin>>p;
        for(int j=0;j<p;j++)
        {
            cin>>s;
            if(k>s && f)
            {
                c++;
                sell[i]=true;
                f=0;
            }
        }
        i++;
    }
    cout<<c<<endl;
    for(int i=1;i<51;i++)
    {
        if(sell[i]==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
