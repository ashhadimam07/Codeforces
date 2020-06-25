#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m+1];
    for(int i=0;i<=m;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<=m;j++)
        {
            int x=arr[i]^arr[j];
            int count=0;
            while(x>0)
            {
                count++;
                x=x&(x-1);
            }
            if(count<=k)
            {
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}
