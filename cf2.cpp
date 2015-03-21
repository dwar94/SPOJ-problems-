#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,m,a,t=1,i,b,d;
	map<int,int> M;
	scanf("%d%d",&n,&m);
	a=3*m;
	int c[a];
	for(i=0;i<3*m;i=i+3)
	{
		scanf("%d%d%d",&a,&b,&d);
		c[i]=a;
		c[i+1]=b;
		c[i+2]=d;
		if((M[a]==0)&&(M[b]!=1)&&(M[d]!=1))
		 M[a]=1;
		else if(M[a]==0)
		    if(((M[b]==3)&&(M[d]==2))||((M[b]==2)&&(M[d]==3)))
                   M[a]=2;
            else
			       M[a]=3;       
		  
		if(M[b]==0&&M[a]!=2&&M[d]!=2)
		 M[b]=2;
		 else if(M[b]==0)
		    if(((M[a]==1)&&(M[d]==2))||((M[a]==2)&&(M[d]==1)))
                   M[b]=3;
            else
			       M[b]=1;   
		if(M[d]==0&&M[a]!=3&&M[b]!=3)
		 M[d]=3;
		else if(M[d]==0)
		    if(((M[b]==3)&&(M[a]==2))||((M[b]==2)&&(M[a]==3)))
                   M[d]=1;
            else
			       M[d]=2;    
	}
	for(i=0;i<3*m;i++)
	{
		printf("%d ",M[c[i]]);
	}
	
	return 0;
}
