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
    int l=0;
    int r=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            l=i;
            break;
        }
    }
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]<arr[i-1])
        {
            r=i;
            break;
        }
    }
    if(l>r){
        swap(l,r);
    }
    int i=l;
    int j=r;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
        cout<<l+1<<" "<<r+1;
    }
    return 0;
}
