#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int minimum=INT_MAX;
    for(int i=0,j=n-1;i<m,j<m;i++,j++)
    {
        minimum=min(minimum,arr[j]-arr[i]);
    }

    cout<<minimum;
    return 0;
}
