#include<stdio.h>
int main()
{
	int n,a,i,z=0,f;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a==0)
		  z++; 
	}
	f=n-z;
	if(((f/9)>=1)&&(z>=1))
	{ 
	 a=9*(f/9);
	 for(i=0;i<a;i++)
		printf("5");
	 for(i=0;i<z;i++)
		printf("0");  
    }
    else
    {
      if(z==0)
       printf("-1");
      else
	   printf("0") ;
     }
     
}
