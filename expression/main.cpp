#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m=INT_MIN;
    if((a*b*c) > m)
    {
        m=a*b*c;
    }
    if(((a+b)*c) > m)
    {
        m=(a+b)*c;
    }
    if((a+(b*c))>m)
    {
        m=a+(b*c);
    }
    if((a*(b+c))>m)
    {
        m=a*(b+c);
    }
    if((a+b+c)>m)
    {
        m=a+b+c;
    }
    cout<<m;
    return 0;
}
