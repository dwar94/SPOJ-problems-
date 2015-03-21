#include<stdio.h>
#include<iostream>
#include<limits.h>
int n,m,i,j;
int max(int,int,int);
int path(int **a,int k,int l)
{
	if(k>=n||l>=m||l<0)
	return 0;
	else
	return max(path(a,k+1,l),path(a,k+1,l-1),path(a,k+1,l+1))+a[k][l]; 
	
}
int max(int x,int y,int z)
{
   if (x > y)
      return (x > z)? x : z;
   else
      return (y > z)? y : z;
}
int main()
{
	int t,**a,*b;
	scanf("%d",&t);
	while(t--)
	{
	 scanf("%d",&n);
	 scanf("%d",&m);
	 //int a[n][m],b[m];
	 a=new int * [n];
	 for(i=0;i<n;i++)
	 	a[i]=new int[m];
     b=new int[m];
	 for(i=0;i<n;i++)
	 for(j=0;j<m;j++)
	 scanf("%d",&a[i][j]);
	 b[0]=path(a,0,0); 
	 for(i=1;i<m;i++)
	 {
	  b[i]=path(a,0,i); 
	  if(b[i]>b[0])
	   b[0]=b[i]; 
     }
     printf("%d",b[0]);
    }
     return 0;
     
}

