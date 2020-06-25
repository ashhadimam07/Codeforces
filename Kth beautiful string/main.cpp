#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int MAX_CHAR = 26;
const int MAX_FACT = 20;
ll fact[MAX_FACT];
void precomputeFactorials()
{
    fact[0] = 1;
    for (int i = 1; i < MAX_FACT; i++)
        fact[i] = fact[i - 1] * i;
}
void fun(string str,long long n)
{
     precomputeFactorials();
     long long len = str.size();
    long long freq[MAX_CHAR] = { 0 };
    for (int i = 0; i < len; i++)
        freq[str[i] - 'a']++;
    char out[MAX_CHAR];
    long long sum = 0;
    long long k = 0;
    while (sum != n)
    {
        sum = 0;
        for (int i = 0; i < MAX_CHAR; i++)
         {
            if (freq[i] == 0)
                continue;
            freq[i]--;
            long long xsum = fact[len - 1 - k];
            for (int j = 0; j < MAX_CHAR; j++)
                xsum /= fact[freq[j]];
            sum += xsum;
            if (sum >= n) {
                out[k++] = i + 'a';
                n -= (sum - xsum);
                break;
            }
            if (sum < n)
                freq[i]++;
        }
    }
    for (int i=MAX_CHAR-1; k < len && i >= 0; i--)
        if (freq[i]) {
            out[k++] = i + 'a';
            freq[i++]--;
        }
    out[k] = '\0';
    cout << out<<endl;
}
int main()
{
    int t;
    cin>>t;
    int n;
    long long k;
    while(t--)
    {
       cin>>n>>k;
       string s="";
       int i=0;
       while(i<n-2)
       {
           s+='a';
           i++;
       }
       while(i<n)
       {
           s+='b';
           i++;
       }
       fun(s,k);
    }
    return 0;
}
