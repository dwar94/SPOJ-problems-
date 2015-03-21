#include<stdio.h>
#include<iostream>
int main()
{
	int n,i;
	scanf("%d",&n);
	char a[2*n],b[2*n];
	scanf("%s",&a);
	for(i=0;i<(2*n)-1;i++)
	{
		b[i]=a[i+1];
	}
	b[(2*n)-1]=a[(2*n)-2];
	b[2*n]='\0';
	printf("%s",b);
	return 0;
}
