#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int even=0;
    int odd=0;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even==1)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                index=i+1;
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                index=i+1;
            }
        }
    }
    cout<<index;
    return 0;
}
