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
    sort(arr,arr+n);
    int res[n];
    for(int i=0;i<n;i=i+1)
    {
        res[i]=0;
    }
    int cnt=0;
    if(n%2==0)
    {
        cnt=(n-1)/2;
    }
    else
    {
        cnt=n/2;
    }
    int i=0,j=1,k=0;
    while(i<n && j<n)
    {
        res[j]=arr[i];
        i++;
        j=j+2;
    }
    while(i<n && k<n)
    {
        res[k]=arr[i];
        i++;
        k=k+2;
    }
    cout<<cnt<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
