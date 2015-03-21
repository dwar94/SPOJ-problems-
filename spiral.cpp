#include<stdio.h>
#include<iostream>
using namespace std;
void BottomandLeft(int **a,int,int,int,int);
void TopandRight(int **a, int x1, int y1, int x2, int y2) {
    int i = 0, j = 0;
    for(i = x1; i<=x2; i++) {
        printf("%d ", a[y1][i]);
    }
    for(j = y1 + 1; j <= y2; j++)         {
        printf("%d ", a[j][x2]);
    }
    if(x2-x1 > 0) {
        BottomandLeft(a, x1, y1 + 1, x2-1, y2);
    }
}
void BottomandLeft(int **a, int x1, int y1, int x2, int y2) {
    int i = 0, j = 0;
    for(i = x2; i>=x1; i--) {
        printf("%d ", a[y2][i]);
    }
    for(j = y2 - 1; j >= y1; j--) {
        printf("%d ", a[j][x1]);
    }
    if(x2-x1 > 0) {
        TopandRight(a, x1+1, y1, x2, y2-1);
    }
}
int main()
{
	int n,m,**a;
	scanf("%d",&n);
	scanf("%d",&m);
	a=new int * [n];
	for(int i=0;i<n;i++)
		a[i]=new int[m];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	 scanf("%d",&a[i][j]);
	TopandRight(a,0,0,n-1,m-1);
    printf("\n");
	return 0; 
}
