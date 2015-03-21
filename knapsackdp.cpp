#include<stdio.h>
int max(int x,int y){return (x>y)?x:y;}
int knapsack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n][W];
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
           {
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],K[i-1][w]);
           }
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[n][W];
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
