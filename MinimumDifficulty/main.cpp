#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int diff=arr[n-1]-arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(i+2<n && arr[i+2]-arr[i]<diff)
        {
            diff=arr[i+2]-arr[i];
        }
    }
    cout<<diff;
    return 0;
}
