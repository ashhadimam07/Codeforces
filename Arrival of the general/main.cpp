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
    int m1=INT_MIN;
    int m2=INT_MAX;
    int maxpos = 0,minpos = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m1)
        {
            m1=arr[i];
            maxpos=i;
        }
        if(arr[i]<=m2)
        {
            m2=arr[i];
            minpos=i;
        }
    }
    cout<<maxpos + (n-1-minpos) - ((minpos < maxpos) ? 1 : 0);
    return 0;
}
