#include<stdio.h>
unsigned long long int max(unsigned long long int a, unsigned long long int b){
	return a > b ? a : b;
}
int main()
{
	 int t,cnt=0;
	 scanf("%d",&t);
	 while(t--)
	 {
	 	int n,p;
	 	unsigned long long int d[1010];
	 	scanf("%d",&n);
	 	for(int i=0;i<n;i++)
		 {
		 	scanf("%d",&p);
		 	d[i]=max(p + (i > 1 ? d[i-2] : 0), i > 0 ? d[i-1] : 0); 
		 }
		 cnt++;
		printf("Case %d: %llu\n",cnt,d[n-1]); 
	 }
	 return 0;
}
