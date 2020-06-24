#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    int ans;
    int interval=(n-1)*10;
    if(interval>=d)
    {
        ans=-1;
    }
    else
    {
        if((interval+sum)<=d)
        {
            d=d-(interval+sum);
            ans=(d+interval)/5;
        }
        else
        {
            ans=-1;
        }
    }
    cout<<ans;
    return 0;
}
