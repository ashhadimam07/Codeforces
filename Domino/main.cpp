#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>brr[i];
    }
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        s1=s1+arr[i];
        s2=s2+brr[i];
    }
    if(s1%2==0 && s2%2==0)
    {
        cout<<"0"<<endl;
    }
    else if((s1%2==0 && s2%2!=0) || (s1%2!=0 && s2%2==0))
    {
        cout<<"-1"<<endl;
    }
    else if(s1%2!=0 && s2%2!=0)
    {
        bool f=false;
        for(int i=0;i<n;i++)
        {
            if((arr[i]%2==0 && brr[i]%2!=0) || (arr[i]%2!=0 && brr[i]%2==0))
            {
                f=true;
                break;
            }
        }
        if(f)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}
