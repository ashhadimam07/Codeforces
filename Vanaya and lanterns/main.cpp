#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double dis=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]>dis)
        {
            dis=arr[i+1]-arr[i];
        }
    }
    double y=max(arr[0]-0,l-arr[n-1]);
    double x=max(dis/2,y);
    printf("%.10f\n",x);
    return 0;
}
