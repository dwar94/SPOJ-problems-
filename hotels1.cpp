#include<stdio.h>
#include<iostream>
#include<algorithm>
int main()
{
	 int n,m;
	 scanf("%d",&n);
	 scanf("%d",&m);
	 int a[n],i,j;
	 static int b[2];
	 for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	 for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	 {
	  b[1]+=a[j];
	  if(b[1]>m)
	  {
	  	b[1]-=a[i];
	    if(b[1]>b[2])
	      b[2]=b[1];
	    b[1]=0;  
	    break;
      }
      else if(b[1]==m)
      {
       b[2]=b[1];
       b[1]=0;
       break;
      }
     }
	 printf("%d",b[2]);
	 return 0;
}
