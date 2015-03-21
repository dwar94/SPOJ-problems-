using namespace std;
#include <iostream>
#include <cstdio>
#include <vector>
 
# define MAX 10000001
# define MOD 10007
vector<bool> prime(MAX,true);
int sum[MAX];
 
void sieve()
{
     int i,j,p;
     prime[1]=false;
 
     for(i=3;(i*i)<MAX;i+=2)
     {
          if(!prime[i]) continue;
          for(j=i*i;j<MAX;j+=(i<<1))
          prime[j]=false;
     }
 
     sum[0]=sum[1]=0;sum[2]=1;
     p=1;
 
     for(i=3;i<MAX;i++)
     {
          if(!(i&1))
          {
               sum[i]=p;
               continue;
          }
          if(prime[i])
          {
               p++;
               sum[i]=p;
          }
          else sum[i]=p;
     }
}
int sq(int x)
{
     return (x*x)%MOD;
}
int pow(int x)
{
     if(!x) return 1;
     if(x&1) return (2*pow(x-1))%MOD;
     return sq(pow(x/2));
}
int main()
{
     sieve();
     int num,cnt,i;
     while(scanf("%d",&num)!=EOF)
     {
          cnt=sum[num];
          if(cnt!=0) cnt=pow(cnt-1);
 
          printf("%d\n",cnt);
     }
     return 0;
}
