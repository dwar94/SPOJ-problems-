#include<stdio.h>
int main()
{
 int i,j;
 int a[1000000]={0};
 a[0]=0;
 a[1]=0;
 j=2;
 for(i=1;i<1000000;i++)
 {
  if((i<j)&&(j%i==0))
  {
   a[j]+=i;
  } 
  else if(j==1000000)
   i=1000;
  else if(i>=j)
  { 
   j++;
   i=0;
  }
 }  
 for(i=2;i<1000000;i++)
  printf("%d\n",a[i]);
 return 0;
} 
