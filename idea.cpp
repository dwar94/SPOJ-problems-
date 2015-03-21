#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
struct idea{
	int x,y,id;
	idea(){}
	idea(int x1,int y1,int y2):x(x1),y(y1),id(y2){
	}
	bool operator < (idea X)const{
		if(x!=X.x)return x<X.x;
		else
		 return y<X.y;
	}
}a[300000];
int bit[100001],ans[300000];
int update(int idx)
{
	for(int i=idx;i<=100000;i+=i&(-i))
	  ++bit[i];
}

int read(int idx)
{
	int r=0;
	for(int i=idx;i>0;i-=i&(-i))
	  r+=bit[i];
	return r;  
}
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i].x;
		cin>>a[i].y;
		a[i].id=i;
	}
	sort(a,a+n);
	/*for(i=0;i<n;i++)
	{
		cout<<a[i].x<<"  "<<a[i].y<<":"<<a[i].id<<endl;
	}*/
	for(i=0;i<n;)
	{
	  int temp;
	  temp=i;
	  while(temp<n&&a[temp].x==a[i].x&&a[temp].y==a[i].y)
	    temp++;	
	  for(int j=i;j<temp;j++)
	    ans[a[j].id]=read(a[j].y);
	  for(int j=i;j<temp;j++)
	    update(a[j].y);
	    i=temp;
    }
    for(i=0;i<n;i++)
     cout<<bit[i]<<""<<ans[i];
	return 0;
}
