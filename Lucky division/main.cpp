#include <iostream>
using namespace std;
bool fun(int x)
{
    if(x<10 && (x==4 || x==7))
        return 1;
    else if((x>10 && x<100) && ((x%10==4 || x%10==7) && (x/10 == 4 || x/10 == 7)))
        return 1;
    else if((x > 100 && x < 1000) && (x%10==4 || x%10==7) && (x/10 == 44 || x/10 == 47 || x/10 == 77 || x/10 == 74))
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin>>n;
    string ans;
    for(int i=1;i<1000;i++)
    {
        if(fun(i))
        {
            if(n%i==0)
            {
               ans="YES";
               break;
            }
        }
    }
    if(ans=="YES")
        cout<<ans;
    else
        cout<<"NO";
    return 0;
}
