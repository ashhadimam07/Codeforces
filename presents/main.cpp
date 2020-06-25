#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int x=arr[i];
        x=x-1;
        temp[x]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
}
