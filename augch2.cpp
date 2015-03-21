#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		if(x==0&&y==0)
		    printf("YES\n");
		else if(x>=0&&y>=0)
		{
			if(x%2!=0)
			{
				if(y<=x+1||y%2==0)
					printf("YES\n");
				else
				    printf("NO\n");
			}
			else
			{
				if(y>x&&y%2==0)
				    printf("YES\n");
				else
				    printf("NO\n");    
			}
		}
		else if((x<=0&&y>=0))
		{
			if(x%2==0)
			{
				if(y<=-x||y%2==0)
				 printf("YES\n");
				else
				 printf("NO\n"); 
			}
			else
			{
				if((y%2==0&&y>-x)&&(y!=0))
				 printf("YES\n");
				else
				 printf("NO\n"); 
			}
		}
		else if(x<=0&&y<=0)
		{
			 if(x%2==0)
			{
				if(x<=y||y%2==0)
				 printf("YES\n");
				else
				 printf("NO\n"); 
			}
			else
			{
				if((y%2==0&&y<x)&&y!=0)
				 printf("YES\n");
				else
				 printf("NO\n"); 
			}
		
		}
		else if(x>=0&&y<=0)
		{
			if(y%2==0)
			{
				if((x<=1-y)||(x%2!=0))
				 printf("YES\n");
				else
				 printf("NO\n"); 
			}
			else
			{
				if(x%2!=0&&x>-y)
				 printf("YES\n");
				else 
				 printf("NO\n"); 
			} 
		}
	
	
}
	return 0;
}
