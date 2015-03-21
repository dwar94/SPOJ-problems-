#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int updateutil(int *st,int ss,int se,int ind,int diff,int curr)
{
    if(ind<ss||ind>se)
     return 0;
    st[curr]+=diff;
    if(se!=ss)
    {
        int mid=ss+(se-ss)/2;
        updateutil(st,ss,mid,ind,diff,2*curr+1);
        updateutil(st,mid+1,se,ind,diff,2*curr+2);
    }
}
int updatevalue(vector<int> v,int *st,int i,int newval)
{
    if(i<0||i>v.size()-1)
        return 0;
    int diff=newval-v[i];
    v[i]=newval;
    updateutil(st,0,v.size()-1,i,diff,0);

}
int buildutil(vector<int> v,int ss,int se,int *st,int curr)
{
    if(ss==se)
    {
        st[curr]=v[ss];
        return v[ss];
    }
    int mid=ss+(se-ss)/2;
    st[curr]=buildutil(v,ss,mid,st,(2*curr)+1)+buildutil(v,mid+1,se,st,(2*curr)+2);
    return st[curr];
}
int sumutil(int *st,int ss,int se,int qs,int qe,int curr)
{
    if(qs<=ss&&qe>=se)
        return st[curr];
    if(se<qs||ss>qe)
        return 0;
    int mid=ss+(se-ss)/2;
    return sumutil(st,ss,mid,qs,qe,(2*curr)+1)+sumutil(st,mid+1,se,qs,qe,(2*curr)+2);
}
int getsum(int *st,int n,int qs,int qe)
{
    if(qs<0||qe>n-1||qs>qe)
        return -1;
    return sumutil(st,0,n-1,qs,qe,0);

}
int *buildseg(vector<int> v,int n)
{
    int x=(int)(ceil(log2(n)));
    int max=2*(int)pow(2,x)-1;
    int *st=new int[max];
    buildutil(v,0,n-1,st,0);
    return st;
}
int main()
{
    int n,s,q,ty,strt,end;
    vector<int> v;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s);
        v.push_back(s);
    }
    int *st=buildseg(v,n);
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
    	scanf("%d%d%d",&ty,&strt,&end);
    	if(ty==1)
    	 getsum()
    }
    cout<<getsum(st,n,3,5)<<endl;
    updatevalue(v,st,3,-1);
    cout<<getsum(st,n,3,5);
    return 0;
}

