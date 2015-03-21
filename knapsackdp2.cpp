#include<stdio.h>
int max(int x,int y){return (x>y)?x:y;}
int knapsack(int W, int wt[], int val[], int n)
{
   int i, w;
   int k[W];
   k[0]=1;
   for(i=1;i<W;i++)
    k[i]=0;
   for (i = 1; i <= n; i++)
   {
       for (w = W; w <= 1; w++)
       {

           if(wt[i] <= w)
           {
                k[w]=max((val[i]+k[w-wt[i]]),k[w-1]);
           }
           else
                 k[i] = k[i-1];
       }
   }
 
   return k[W];
}

int main()
{
	int s,n,i,res;
	scanf("%d%d",&s,&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
	res=knapsack(s,b,a,n);
	printf("%d\n",res);
	return 0;
}
