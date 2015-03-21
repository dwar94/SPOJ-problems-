#include<stdio.h>
#include<iostream>
#include<limits.h>
using namespace std;
char a[105][105];
int r,c;
int vis[105][105];
char str[]={'A','L','L','I','Z','Z','W','E','L','L'};
bool dfs(int d,int b,int l)
{
 	int u,v,i,j;
	 if(l==10)
 	 return true;
 	vis[d][b]=1; 
 	for(i=-1;i<=1;i++)
	 for(j=-1;j<=1;j++)
	 {
	 	u=d+i;
		v=b+j;
		if(vis[u][v])
		 continue;
	 	if(u>=0&&v>=0&&u<r&&v<c&&a[u][v]==str[l])
	 	  if(dfs(u,v,l+1))
	 	  {
	 	  	vis[d][b]=0;
	 	  	return true;
	 	  }   
			
	 }
	 vis[d][b]=0;
	 return false; 
}
int main()
{
	int i,t,j,res;
	cin>>t;
	while(t--)
	{
	 cin>>r>>c;
	 res=0;
	 for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		 cin>>a[i][j];
	 for(i=0;i<r;i++)
	 {  
	   for(j=0;j<c;j++)
	   if(a[i][j]=='A'&&dfs(i,j,1))
	   {
	   	 res=1;
	   	    break;
	   }
     }
     if(res==0)
      cout<<"NO"<<endl;
     else
	  cout<<"YES"<<endl; 
    }
	return 0;
}
