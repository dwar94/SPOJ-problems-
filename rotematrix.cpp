#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	int a[r][c],k=0,l=r-1;
	for(int i=0;i<r;i++)
	 for(int j=0;j<c;j++)
	 {
	 	cin>>a[i][j];
	 }
	while(k<c) 
	{
		if(l<0)
		{
			l=r-1;
			k++;
			cout<<endl;
		}
		else
		{
			cout<<a[l--][k]<<" ";
		}
	}
	return 0;
}
