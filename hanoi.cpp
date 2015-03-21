#include<stdio.h>
#include<iostream>
using namespace std;
void hanoi(int n,char a,char c,char b)
{
	if(n==1)
	{
	  if((a=='A'&&c=='C'))
	  {	
	   printf("from %c to %c\n",a,b);
	   printf("from %c to %c\n",b,c);
      }
      else if((a=='C'&&c=='A'))
      {
      	printf("from %c to %c\n",c,b);
	    printf("from %c to %c\n",b,a);
      }
	  else
	   printf("from %c to %c\n",a,c);
    }
    
    else
    {
    	hanoi(n-1,a,b,c);
    	if((a=='A'&&c=='C'))
    	{ 
		 printf("from %c to %c\n",b,c);
    	 printf("from %c to %c\n",a,b);
        }
        else if(a=='C'&&c=='A')
        {
        	printf("from %c to %c\n",c,b);
    	    printf("from %c to %c\n",b,a);
        }
        else
        {
        	printf("from %c to %c\n",a,c);
        }
        
		hanoi(n-1,c,);
    }
}
int main()
{
	int n;
	scanf("%d",&n);
	char a,b,c;
	a='A';
	b='B';
	c='C';
	hanoi(n,a,c,b);
	return 0;
}
