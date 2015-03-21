#include<stdio.h>
#include<string.h>
int main()
{
	int i,t,temp,striker,nonstriker;
	char s[320];
	scanf("%d",&t);
	while(t--)
	{
		striker=nonstriker=temp=0;
		scanf("%s",&s);
		for(i=0;i<strlen(s);i++)
		{
		  if(i%6==0)
		  {
		  	temp=striker;
		  	striker=nonstriker;
		  	nonstriker=temp;
		  }
		  if(s[i]=='2'||s[i]=='4'||s[i]=='6')
		   {  
			striker+=s[i]-'0';
	       }
		   else if(s[i]=='w')
		   {
		  	printf("%d\n",striker);
		  	striker=0;
		   }
		   else if(s[i]=='1'||s[i]=='3')
		   {
		  	striker+=s[i]-'0';
		  	temp=striker;
		  	striker=nonstriker;
		  	nonstriker=temp;
		   }
	     }
		if(s[i-1]=='w')
		 printf("%d*\n",nonstriker);
		else
		{
			printf("%d**\n",striker);
			printf("%d*\n",nonstriker);
		}
		
	}
}
