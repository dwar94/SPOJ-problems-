#include<stdio.h>
int main()
{
    int n,max,j=0,i;
    scanf("%d",&n);
    int a[n],k,l=-1;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n-k+1;i++)
    {
      if(l<i)
      {
       max=a[i];
	   l=i;	
	   for(j=i+1;j<i+k;j++)
       {
      	if(max<=a[j])
      	{
      		max=a[j];
      		l=j;
      	}
       }
		printf("%d ",max);   
      }
      else
      {
      	if(max<a[i])
      	 {
		   max=a[i];
           l=i; 	 
		 }
		printf("%d ",max); 
      }
    }        
	return 0;
}

