#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,res=0,i=0,temp;
	scanf("%d",&n);
	while(n!=0)
	{
		temp=n%2;
	    res+=temp*pow(10,i++);
	    n=n/2;
	}
	printf("%d\n",res);
	
	
	return 0;
}
