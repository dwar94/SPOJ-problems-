#include<stdio.h>
int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    j=2;
    for(i=0;i<t;i++)
    { 
	 scanf("%d",&n);
     int f[n];
     int a[n];
     a[1]=a[0]=0;
     f[2]=0;
     for(i=1;i<n;i++)
     {
		if((i<j)&&(j%i==0))
         f[j]+=i;
        else if(j==n)
         i=n;
        else if(i>=j)
        {
            j++;
            i=0;
        }
        f[j+1]=0;
     }
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+f[i];
    }
    
        printf("%d\n",a[n]);
    }
    return 0;
}
