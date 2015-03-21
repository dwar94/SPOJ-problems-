#include<stdio.h>
#include<iostream>
#include<cstring>
long long dp[5005];
char str[5005];
int l;
long long dyp(int i)
{
	if(i>=l)
	 return 1;
	if(dp[i])
	 return dp[i];
	if(str[i]=='0')
	 return 0; 
	long long res=0;
	res+=dyp(i+1);
	if(i+1<l&&10*(str[i]-'0')+str[i+1]-'0'<=26)
	 res+=dyp(i+2);
	return dp[i]=res;
}
int main()
{
 while(scanf("%s",str)==1)
 {
 	if(str[0]=='0')
 	 break;
 	l=strlen(str); 
 	memset(dp,0,sizeof(dp));
 	printf("%lld\n",dyp(0));
 }
 return 0;
}

