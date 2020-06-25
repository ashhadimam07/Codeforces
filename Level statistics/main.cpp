#include<bits/stdc++.h>
using namespace std;
struct stats
{
    int p,c;
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        stats arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].p>>arr[i].c;
        }
        bool flag=true;
        if(n==1)
        {
            if(arr[0].c>arr[0].p)
            {
                flag=false;
            }
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if((arr[i].p <= arr[i+1].p) && (arr[i].p>=arr[i].c))
                {
                    if(arr[i+1].c > arr[i+1].p || arr[i+1].c < arr[i].c)
                    {
                        flag=false;
                    }
                }
                else
                {
                    flag=false;
                }
            }
        }
        if(flag)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
