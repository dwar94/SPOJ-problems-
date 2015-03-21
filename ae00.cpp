#include<stdio.h>
#include<math.h>
int main()
{
	int n,res=0,i;
	scanf("%d",&n);
	for(i=1;i<=(int)sqrt(n);i++)
	res+=(n/i)-i+1;
	printf("%d",res);
	return 0;
}
