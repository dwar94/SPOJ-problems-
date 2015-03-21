#include<stdio.h>
#include<iostream>
#define MAXN 10000
#define MAXIND 128
using namespace std;
int a[10001],M[10000];
 void initialize(int node, int b, int e, int M[MAXIND], int A[MAXN], int N)
  {
      if (b == e)
          M[node] = b;
      else
       {
          initialize(2 * node, b, (b + e) / 2, M, A, N);
          initialize(2 * node + 1, (b + e) / 2 + 1, e, M, A, N);
          if (A[M[2 * node]] <= A[M[2 * node + 1]])
              M[node] = M[2 * node];
          else
              M[node] = M[2 * node + 1]; 
      }
  } 
  int main()
  {
  	int n,i;
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
  	 {
	   scanf("%d",&a[i]);
     }
    for(i=0;i<MAXIND;i++)
	 M[i]=-1; 
  	initialize(1,0,n-1,M,a,n);
	for(i=1;i<2*n;i++)
	 printf("%d ",M[i]);
	return 0; 
  }

