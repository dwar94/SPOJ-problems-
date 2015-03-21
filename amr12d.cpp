#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	string st,temp;
	scanf("%d",&t);
	while(t--)
	{
		temp="";
		cin>>st;
		for(int i=st.length()-1;i>=0;i--)
		  temp+=st[i];
		if(st==temp)
		  printf("YES\n");
		else
		 printf("NO\n");  
	}
	
	return 0;
}
