#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    bool ans=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
                int c=0;
                if(j-1>=0 && (arr[i][j-1]=='o'))
                {
                    c=c+1;
                }
                if(j+1<=n-1 && (arr[i][j+1]=='o'))
                {
                    c=c+1;
                }
                if(i-1>=0 && (arr[i-1][j]=='o'))
                {
                    c=c+1;
                }
                if(i+1<=n-1 && (arr[i+1][j]=='o'))
                {
                    c=c+1;
                }
                if(c%2!=0)
                {
                    ans=false;
                    break;
                }
        }
        if(ans==false)
        {
            break;
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
