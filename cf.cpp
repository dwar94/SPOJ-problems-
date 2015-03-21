#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
	int m,i,x,y,sum=0,j;
	scanf("%d",&m);
	int a[m];
	a[0]=0;
	for(i=1;i<=m;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d%d",&x,&y);
	for(i=1;i<=m;i++)
	{ 
	 a[i]+=a[i-1]; 
	 if(a[i]>=x&&a[i]<=y)
	 {  
	   for(j=i+1;j<=m;j++)
	    sum+=a[j];
	   if(sum<=y)
	   {
         sum=i+1;
         break;
       }
	   else
	     sum=0;  
     }
    }
    if(sum!=0)
     printf("%d",sum);
    else
	 printf("0"); 
	return 0;
}
