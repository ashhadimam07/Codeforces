#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long a,b,c,d,x,y,x1,y1,x2,y2;
    while(t--)
    {
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        if ((x<x1||x>x2||y<y1||y>y2)||(x+(b-a)>x2||x+(b-a)<x1||
                                       y+(d-c)>y2||y+(d-c)<y1)||((a&&a==b&&x==x1&&x==x2)||(c&&c==d&&y==y1&&y==y2)))
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
    }
    return 0;
}
