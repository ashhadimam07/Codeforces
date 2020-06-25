#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int home[n];
   int guest[n];
   for(int i=0;i<n;i++)
   {
       cin>>home[i];
       cin>>guest[i];
   }
   int c=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(home[i]==guest[j])
           {
               c++;
           }
       }
   }
   cout<<c;
   return 0;
}
