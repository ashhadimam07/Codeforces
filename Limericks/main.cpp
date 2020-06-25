#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b=a;
    for(int i=2;i<=35;i++)
    {
        if(a%i==0)
        {
            a=a/i;
            break;
        }
    }
    b=b/a;
    cout<<min(a,b)<<max(a,b);
    return 0;
}
