#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int c=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    if(k>=m)
    {
        m=0;
    }
    else
    {
        k--;
        for(int i=0;i<n;i++)
        {
            c++;
            if(c>1)
            {
                arr[i]--;
            }
            if(arr[i]>=m)
            {
                m=0;
                break;
            }
            else
            {
                m=m-arr[i];
                if(m==k || k>m)
                {
                    m=0;
                    break;
                }
            }
        }
    }
    if(m==0)
    {
        cout<<c;
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}
