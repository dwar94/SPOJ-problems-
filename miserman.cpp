#include<stdio.h>
#include<limits.h>
int n,m,i,j;
int max(int x,int y,int z)
{
   if (x <= y)
      return (x <= z)? x : z;
   else
      return (y <= z)? y : z;
}
int main()
{
	 int maxi;
	 scanf("%d",&n);
	 scanf("%d",&m);
	 int a[n][m];
	 for(i=0;i<n;i++)
	 for(j=0;j<m;j++)
	 scanf("%d",&a[i][j]);
	 for(i=1;i<n;i++)
	 for(j=0;j<m;j++)
	 {
	 	if(j==0&&j!=m-1)
	 	a[i][j]+=max(a[i-1][j],a[i-1][j+1],INT_MAX);
	 	else if(j==m-1)
	 	a[i][j]+=max(a[i-1][j],INT_MAX,a[i-1][j-1]);
	 	else if(j==0&&j==m-1)
	 	{
	 	 a[i][j]+=a[i-1][0];
	 	 //printf("%d",a[i][j]);
	    }
	 	else
	 	a[i][j]+=max(a[i-1][j],a[i-1][j+1],a[i-1][j-1]);
	 	//printf("%d",a[i][j]);
	 }
	 maxi=a[n-1][0];
	 for(i=1;i<m;i++)
	 {
	 	if(maxi>a[n-1][i])
	 	 maxi=a[n-1][i];
	 }
	 printf("%d\n",maxi);
	return 0;
     
}
