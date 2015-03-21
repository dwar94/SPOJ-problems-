#include<stdio.h>
#include<math.h>
int main()
{
	int t,a,b,temp1,temp,temp2;
	long long int m;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d%d%lld",&a,&b,&m);
		temp=sqrt((pow(((2*a)-b),2))+8*b*m);
		printf("%d \n",temp);
		temp1=((b-(a*2))+temp)/(b*2);
		temp2=((b-(a*2))-temp)/(b*2);
		if(temp1<0)
		 printf("%lld\n",temp2);
		else if(temp2<0)
		 printf("%lld\n",temp1); 
		else if(temp1<temp2) 
		 printf("%lld\n",temp1);
		else
		  printf("%lld\n",temp2);
    }
}

