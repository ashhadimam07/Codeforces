#include<iostream>
#include<cstdio>
using namespace std;
int row[20][20],column[20][20];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	char map[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>map[i][j];
        }
    }
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]=='S'){
				for(int x=0;x<m;x++){
					row[i][x]=1;
				}
				for(int y=0;y<n;y++){
					column[y][j]=1;
				}
			}
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
        {
			if(!row[i][j]||!column[i][j])
			{
				ans++;
			}
        }
	}
	cout<<ans<<endl;
}
