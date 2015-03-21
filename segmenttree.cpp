#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int max(int a,int b,int c)
{
	if(a>=b)
	{
		if(a>c)
		 return a;
		else
		 return c;
    }
    else
    {
    	if(c>b)
		 return c;
		else
		 return b;  
    }
}
int getSum(int *st,int ss,int se,int qs,int qe,int index)
{
	if(qs<=ss&&se<=qe)
	 return st[index];
	else if(se<qs||ss>qe)
	 return 0; 
	else
	{ 
	 int mid=(ss+se)/2;
	 return max((getSum(st,ss,mid,qs,qe,2*index+1)+getSum(st,mid+1,se,qs,qe,2*index+2)),getSum(st,ss,mid,qs,qe,2*index+1),getSum(st,mid+1,se,qs,qe,2*index+2));
    }
}

int constructStutil(int *arr,int ss,int se,int *st,int si)
{
	if(ss==se)
	{
		st[si]=arr[ss];
		return arr[ss];
	} 
    int mid=(ss+se)/2;
    st[si]=max((constructStutil(arr,ss,mid,st,(2*si)+1)+constructStutil(arr,mid+1,se,st,(2*si)+2)),constructStutil(arr,ss,mid,st,(2*si)+1),constructStutil(arr,mid+1,se,st,(2*si)+2));
    return st[si];
}
int* constructSt(int *arr,int n)
{
	int h=(int)ceil(log2(n));
	int max=2*pow(2,h)-1;
	int *st=new int[max];
	constructStutil(arr,0,n-1,st,0);
	return st;
}
int main()
{
	int *arr,n,*st,qs,qe,res,t;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    cin>>t;
    while(t--)
	{
     cin>>qs>>qe;
	 st=constructSt(arr,n);
	 res=getSum(st,0,n-1,qs-1,qe-1,0);
	 cout<<res;
    }
	 return 0;
}
