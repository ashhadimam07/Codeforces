#include<bits/stdc++.h>
using namespace std;
struct laptop
{
    int price;
    int quality;
};
bool compare(laptop a,laptop b)
{
    return a.quality>b.quality;
}
int main()
{
    int n;
    cin>>n;
    laptop arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].price;
        cin>>arr[i].quality;
    }
    sort(arr,arr+n,compare);
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i].price<arr[i+1].price)
        {
            c=1;
            break;
        }
    }
    if(c)
    {
        cout<<"Happy Alex";
    }
    else
    {
        cout<<"Poor Alex";
    }
    return 0;
}
