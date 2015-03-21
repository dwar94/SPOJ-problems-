#include<stdio.h>
#include<iostream>
using namespace std;
int count=0,n,m;
void lefttop(int **,int,int,int,int);
void rightdown(int **a,int x,int y,int p,int q)
{
	int i;
	if(count<(n*m))
	 {
	  for(i=p;i<=q;i++)
	   {
	    printf("%d",a[x][i]);
	    count++;
       }
     }
	x++;
	if(count<(n*m))
	{ 
	 for(i=x;i<=y;i++)
	 {
	   printf("%d",a[i][q]);
	   count++;
     }
    }
    q--;
	if(count<(n*m))
	lefttop(a,x,y,p,q);  
}
void lefttop(int **a,int x1,int y1,int p1,int q1)
{
	int i;
	if(count<(n*m))
	{
	 for(i=q1;i>=p1;i--)
	  {
	    printf("%d",a[y1][i]);
	    count++;
      }
    }
	y1--; 
	if(count<(n*m))
	{
	 for(i=y1;i>=x1;i--)
	  {
	   printf("%d",a[i][p1]);
	   count++;
      }
    }
	p1++;
	if(count<(n*m))
	rightdown(a,x1,y1,p1,q1);  
}
int main()
{
	scanf("%d",&n);
	scanf("%d",&m);
	int **a,i,j;
	a=new int * [n];
	for(i=0;i<n;i++)
		a[i]=new int[m];
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	 scanf("%d",&a[i][j]);
	rightdown(a,0,n-1,0,m-1);
	return 0; 
}
