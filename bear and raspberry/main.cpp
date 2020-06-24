#include<bits/stdc++.h>
using namespace std;

int main()
{
    int max=0;
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
       int profit=arr[i]-arr[i+1]-c;
       if(profit>max)
       {
           max=profit;
       }
    }
    cout<<max;
    return 0;
}
