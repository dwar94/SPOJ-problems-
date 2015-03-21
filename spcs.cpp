#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int palin(char st[100001])
{
	int l=strlen(st);
	for(int i=0,j=l-1;i<l/2;i++,j--)
	{
		if(st[i]!=st[j])
		 return 0;
	}
	return 1;
}
int main()
{
	int t,n,nt,index;
	char st[100001];
	char prev;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%s",st);
		char st1[100001];
		prev=st[0];
		st1[0]=prev;
		index=1;
		for(int i=1;st[i]!='\0';i++)
		{
			if(st[i]!=prev)
			{
				st1[index++]=st[i];
			}  
			prev=st[i];
		}
		st1[index]='\0';
		//cout<<st1<<" "<<st2<<endl;
	    if(palin(st1))
	      printf("YES\n");
	    else
		  printf("NO\n") ;
	}
	return 0;
}

