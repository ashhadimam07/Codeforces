#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    if(y1==y2)
    {
        long long cnt=abs(x1-x2);
        cout<<x1<<" "<<y1+cnt<<" "<<x2<<" "<<y2+cnt;
    }
    else if(x1==x2)
    {
        long long cnt=abs(y1-y2);
        cout<<x1+cnt<<" "<<y1<<" "<<x2+cnt<<" "<<y2;
    }
    else
    {
        if(abs(x1-x2)==abs(y1-y2)){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        }
        else
        cout<<"-1";
    }

    return 0;
}
