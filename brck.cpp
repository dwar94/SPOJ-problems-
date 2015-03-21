#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void updatevalue(int *st,int ss,int se,int ind,int curr)
{
    if(se<ss||ss>ind||se<ind)
     return;
    else if(se==ss)
    {
    	st[curr]=-st[curr];
    	return; 
    }
    int mid=ss+(se-ss)/2;
    updatevalue(st,ss,mid,ind,2*curr+1);
    updatevalue(st,mid+1,se,ind,2*curr+2);
    st[curr]=st[2*curr+1]+st[2*curr+2];
    printf("updated node %d to %d\n",curr,st[curr]);
}
int buildutil(string v,int ss,int se,int *st,int curr)
{
    if(ss==se)
    {
        if(v[ss]=='(')
         st[curr]=1;
        else
		 st[curr]=-1; 
		return st[curr];
    }
    int mid=ss+(se-ss)/2;
    st[curr]=buildutil(v,ss,mid,st,(2*curr)+1)+(buildutil(v,mid+1,se,st,(2*curr)+2));
    return st[curr];
}
int *buildseg(string s,int n)
{
    int x=(int)(ceil(log2(n)));
    int max=2*(int)pow(2,x)-1;
    int *st=new int[max];
    buildutil(s,0,n-1,st,0);
    for(int i=0;i<max;i++)
    {
    	cout<<st[i]<<" ";
    }
    cout<<endl;
    return st;
}
int main()
{
    int n,q,ty,t=10;
    bool flag=false;
    string s;
    //vector<int> v;
    for(int j=1;j<=t;j++)
    {
     flag=false;	
     scanf("%d",&n);
     cin>>s;
     /*for(int i=0;i<n;i++)
     {
        if(s[i]=='(')
         v.push_back(1);
        else if(s[i]==')')
		 v.push_back(-1); 
     }*/
     if(n%2==0)
     {
      int *st=buildseg(s,n);
      printf("Test %d:\n",j);
      scanf("%d",&q);
      for(int i=0;i<q;i++)
      {
    	scanf("%d",&ty);
    	if(ty==0)
    	{
    	 
		 
    	  if(st[0]==0)
		   printf("YES\n");
		  else
		   printf("NO\n");  	
    	}
    	else 
    	{
    		updatevalue(st,0,n-1,ty-1,0);
    	}
      }
     }
     else
      {
      	printf("Test %d:\n",j);
		scanf("%d",&q);
      	for(int i=0;i<q;i++)
      	{
      		scanf("%d",&ty);
      		if(ty==0)
      		 printf("NO\n");
      	}
      }
     //v.clear();
    }
    return 0;
}


