#include<stdio.h>
#Include<iostream
using namespace std;
struct node
{
	int lsum,rsum,msum;
};
node tree[2000001];

int arr[50001];
void init(int no,int i,int j)
{
	if(i==j)
	tree[no]=(no){arr[i],arr[i],arr[i]};
	else
	{
		node left,right;
		left=tree[2*no];
		right=tree[2*no+1];
		tree[no].lsum=max(left.lsum,sum[(i+j)/2]-sum[i-1]+right.lsum);
		tree[no].msum=max(left.msum,max(right.msum,left.rsum+right.lsum));
		tree[no].rsum=max(right.rsum,sum[j]-sum[(i+j)/2+1]+left.rsum);
	}
}
node query(int no,int a int b,int i,int j)
{
	if(a==i&&b==j)
	 return tree[no];
	else if(j<=(a+b)/2)
	 return query(2*no,a,(a+b)/2,i,j);
	 return 0;
	else
	  
	  
}

int main()
{
	
	return 0;
}
