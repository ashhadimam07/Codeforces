#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    int x,y;
    bool ans=false;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        arr.push_back(make_pair(x,y));
    }
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++)
    {
        if(s>arr[i].first)
        {
            s=s+arr[i].second;
            ans=true;
        }
        else
        {
            ans=false;
        }
    }
    if(ans)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
