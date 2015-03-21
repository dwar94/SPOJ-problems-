#include<stdio.h>
#include<iostream>
int main()
{
 int n,i,j;
 scanf("%d",&n);
 char a[n];
 scanf("%s",&a);
 for(i=0;i<n;i++)
  for(j=i+1;j<n;j++)
  {
   if(a[i]==a[j])
   { 
	putchar(a[i]);
	j=n;
   } 	
  }
 return 0;
} 
