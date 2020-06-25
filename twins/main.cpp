#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    int ans=0;
    int c=0;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        ans=ans+arr[i];
        c++;
        if(ans>(sum/2))
        {
            break;
        }
    }
    cout<<c;
    return 0;
}
