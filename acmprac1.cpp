#include <stdio.h>
#include <math.h>
#define MAX 10000000
#define LMT 10000
#define LEN 5761456
unsigned flag[MAX/64];
int a[LEN+10], total;
#define ifc(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define isc(x) (flag[x>>6]|=(1<<((x>>1)&31)))
void sieve()
{
	int i, j, k;
	for(i=3; i<LMT; i+=2)
		if(!ifc(i))
			for(j=i*i,k=i<<1; j<MAX; j+=k)
				isc(j);
	a[0] = -1;
	a[1] = 2;
	for(i=3,j=2; i<MAX; i+=2)
		if(!ifc(i))
			a[j++] = i;
	total=j;		
}
int BS(int st, int fn, int val)
{
    int mid;
    while(st <= fn)
    {
        if(val < a[st]) return 0;
        if(val > a[fn]) return 0;
        mid = (st+fn) / 2;
        if(val == a[mid]) return 1;
        else if(val < a[mid]) fn = mid-1;
        else st = mid+1;
    }
}
int main()
{
	sieve();
	int i,t,n,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n); 
		p = BS(0, total-1, n);
		if(p==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
