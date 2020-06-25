#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        cin>>arr2[i];
        cin>>arr3[i];
    }
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i++)
    {
        sum1=sum1+arr1[i];
        sum2=sum2+arr2[i];
        sum3=sum3+arr3[i];
    }
    if(sum1==0 && sum2==0 && sum3==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
