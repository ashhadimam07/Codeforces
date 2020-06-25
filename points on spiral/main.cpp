#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x, y;
    cin>>x>>y;

    int output;
    if(y <= 0 && x > y && x <= -y + 1)
    {
        output = - 4 * y;
    }
    else if(x > 0 && y > -x + 1 && y <= x)
    {
        output = 4 * x - 3;
    }
    else if(y > 0 && x >= -y && x < y)
    {
        output = 4 * y - 2;
    }
    else if(x < 0 && y >= x && y < -x )
    {
        output = -4 * x - 1;
    }

    cout<<output;
    return 0;
}
