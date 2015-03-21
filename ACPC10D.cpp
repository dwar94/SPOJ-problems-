#include<stdio.h>
#include<limits.h>
int min(int x,int y)
{
	return((x<y)?x:y);
}

int main()
{
	int n,t=0;
	scanf("%d",&n);
	while(n!=0)
	{
	  int a[n][3],i,j;
	  for(i=0;i<n;i++)
	  for(j=0;j<3;j++)
	   scanf("%d",&a[i][j]);
	  a[0][0]=INT_MAX; 
	  a[0][2]=a[0][1]+a[0][2];
	  for(i=1;i<n;i++) 
	  for(j=0;j<3;j++)
	  {
	  	if(j==0)
	  	{
	  		a[i][j]+=min(a[i-1][j],a[i-1][j+1]);
	  	}
	  	else if(j==1)
	  	{
	  		a[i][j]+=min(min(a[i-1][j-1],a[i-1][j]),min(a[i-1][j+1],a[i][j-1]));
	  	}
	  	else
	  	    a[i][j]+=min(min(a[i-1][j-1],a[i-1][j]),a[i][j-1]);
	  }
	  t++;
	  printf("%d. %d\n",t,a[n-1][1]);
	  scanf("%d",&n);
    }
    return 0;
}
