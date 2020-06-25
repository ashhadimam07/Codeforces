#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long n,k;
    while(t--)
    {
        cin>>n>>k;
        if(n<k*k || (n-k)%2!=0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }

        cout<<endl;
    }
    return 0;
}
