#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,b[100000],i=0,count=0;
	while(scanf("%d",&n)!=EOF)
		b[i++]=n;
	sort(b,b+i);
	for(int j=1;j<=i;j++)
	{
		if((b[j]-b[j-1])==1)
		  count++;
		else
		{
			int e=b[j-1];
			cout<<"for (int i = "<<e-count<<"; i <= "<<e<<"; i++) cout << i << \" \";"<<endl;
			count=0;
		}   
	}
	return 0;
	
}
