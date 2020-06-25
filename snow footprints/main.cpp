#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int len=str.size();
        int flag=0,flag1=0;
        int start,end;
        for(int i=0;i<len;i++)
        {
            if(str[i]=='R'&&flag==0)
            {
                flag=1;
                start=i;
                end=i;
            }
            if(str[i]=='R'&&str[i+1]=='L')
            {
                end=i;
                break;
            }
            if(str[i]=='R' && str[i+1]=='.')
            {
                end=i+1;
                break;
            }
            //L
            if(str[i]=='L'&&flag1==0)
            {
                flag1=1;
                start=i;
                end=i-1;
            }
            if(str[i]=='L'&&str[i+1]=='R')
            {
                start=i;
            }
            if(str[i]=='L' && str[i+1]=='.')
            start=i;
        }
        cout<<start+1<<" "<<end+1;


    return 0;
}
