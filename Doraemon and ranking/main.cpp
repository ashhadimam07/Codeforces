#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,t;
    cin>>t;
    while(t--)
    {
        bool arr[105]={false};
        cin>>n>>x;
        for(int i=1;i<=n;i++)
        {
            int r;
            cin>>r;
            arr[r]=true;
        }
        for(int i=1;i<=105,x>0;i++)
        {
            if(arr[i]==false)
            {
                arr[i]=true;
                x--;
            }
        }
        int ans=-1;
        for(int i=1;i<=105;i++)
        {
            if(arr[i]==false)
            {
                ans=i-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
