#include<iostream>
#include<vector>
using namespace std;
vector<int> tr;
vector<vector <int> > mem;
int max(int a,int b)
{
	if(a>=b)
	 return a;
	return b; 
}
int recur(int left,int right,int a)
{
	if(left==right)
	{  
	  mem[left][right]=tr[left]*a;
	  return tr[left]*a;
    }
	else if(mem[left][right]!=0)
	  return mem[left][right];
	else
	{
		mem[left+1][right]=recur(left+1,right,a+1);
		mem[left][right-1]=recur(left,right-1,a+1);
		int res=max((mem[left+1][right]+tr[left]*a),(mem[left][right-1]+tr[right]*a));
		return res;
	}
}
int main()
{
	int t,a;
	cin>>t;
	mem.resize(t);
    for(int i=0;i<t;i++)
      mem[i].resize(t);
    tr.resize(t);
	for(int i=0;i<t;i++)
	{
		cin>>a;
		tr[i]=a;
	}  
	cout<<recur(0,t-1,1);
    return 0;
}
