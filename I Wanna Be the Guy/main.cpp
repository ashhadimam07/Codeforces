#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    bool ans=true;
    for(int i=0;i<=n;i++)
    {
        arr[i]=0;
    }
    int p;
    cin>>p;
    int a[p];
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
       arr[a[i]]++;
    }
    int q;
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)
    {
        cin>>b[i];
        arr[b[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
       if(arr[i]==0)
       {
           cout<<"Oh, my keyboard!";
           ans=false;
           break;
       }
    }
    if(ans==true)
    {
        cout<<"I become the guy.";
    }
    return 0;
}
