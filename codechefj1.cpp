#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,n;
	long long int count=0;
	scanf("%d",&t);
	while(t--)
	{
     count=0;	
     scanf("%d",&n);
     char a[n];
     scanf("%s",a);
	 for(int i=0;i<n;i++)
	 {
		if(a[i]=='1')
		{
	       count++;
		}
	 }
	 count=(count*(count+1))/2;
	 cout<<count<<endl;
   }
}
