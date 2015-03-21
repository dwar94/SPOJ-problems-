#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t,i,j,max;
	scanf("%d",&t);
	int a[t],d[t],s[t];
	for(i=0;i<t;i++)
	 {
	 	scanf("%d",&a[i]);
	 	s[i]=1;
	 	if(i>0)
	 	 d[i-1]=a[i]-a[i-1];
	 }
	if(t==1)
	 printf("1");
	else if(t==2)
	 printf("2");  
	else
	{
	for(i=1;i<t;i++)
	 for(j=0;j<i;j++)
	 {
	 	if(((d[i]*d[j])<0)&&(s[j]+1>s[i]))
	 	 s[i]=s[j]+1;
	 }
	max=s[0]; 
	for(i=1;i<t;i++)
	  if(max<s[i])
	   max=s[i];
    printf("%d",max+1); 
    }
}



