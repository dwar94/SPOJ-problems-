#include<stdio.h>
#include<iostream>
int main()
{
 int n,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 { 
  int count=0,count1=0,r=0,c=0,j,k,x,y,res;
  scanf("%d%d",&x,&y);
  char a[x][y];
  for(j=0;j<x;j++)
  {	
   count=0;
  for(k=0;k<y;k++)
  {
  	scanf("%c",&a[j][k]);
	if(a[j][k]!='W')
	 count++;
	else
     count=0;	
	if(count==y)
     r++;	
  }
  }  
  for(j=0;i<y;i++)
  {
   count1=0;
  for(k=0;k<x;k++)
  {
    if(a[j][k]!='W')
      count1++;
	else
      count1=0;	
    if(count1==x)
      c++;     
  }
  }
  count=0;
  count1=0;  
  if(x==1)
  {
   for(j=0;j<y;j++)
    if(a[0][j]=='.')
     count++;
   printf("%d\n",count);
  }
  else if(y==1)  
  {
   for(j=0;j<x;j++)
   { 
	if(a[j][0]=='.')
     count++;
   } 	 
   printf("%d\n",count);
  } 
  else
  {
   if(r>c)
    res=r*x+c*y-r;
   else
    res=r*x+c*y-c;
   printf("%d\n",res);
  }
}  
 return 0;
}
