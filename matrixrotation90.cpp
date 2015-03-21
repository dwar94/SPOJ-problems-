#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	 {
	 	scanf("%d",&a[i][j]);
	 }
	for(int layer=0;layer<n/2;layer++) 
	{
		int first=layer;
		int last=n-1-layer;
		for(int i=first;i<last;i++)
		{
			int offset=i-first;
			int top=a[first][i];
			a[first][i]=a[last-offset][first];
			a[last-offset][first]=a[last][last-offset];
			a[last][last-offset]=a[i][last];
			a[i][last]=top;
		}
	}
	for(int i=0;i<n;i++)
	{
	  for(int j=0;j<n;j++)
	    cout<<a[i][j]<<" ";
	  cout<<endl;  
    }
}
