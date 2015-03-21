#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int isaln(string st)
{
	int i,cnt=0;
	for(i=0;i<=st.size();i++)
	{
		if(st[i]=='9')
		 cnt++;
	}
	if(cnt==st.size())
	 return 1;
	else
	 return 0; 
}
fun(string str,int a,int b)
{
  int mid1,mid2,i,j;
  mid1=(a+b)/2;
  if((b%2)!=0)
   mid2=mid1+1;
  else
   mid2=mid1;
  i=mid1;
  j=mid2;   
  while(i>=0&&j<=str.size())
  {
  	if(str[i]<str[j])
  	 { 
	   temp=str[i]-'0';
	   temp++;
	   ind=i;
	   while((temp/10)>0)
	   { 
		str[i]='0';
		str[j]=str[i];
		str[i-1]=str[i-1]+1;
		temp=str[i-1]-'0';
		i--;j++;
       }
       
       
    else if(str[i]>str[j])
	{
		str[j]=str[i];
		i--;
		j++;
	} 
  }
	
}
int main()
{
	string str;
	int i=0;
	cin>>str;
	if(isaln(str))
	{
		cout<<"1";
		for(i=0;i<str.size()-1;i++)
		 cout<<"0";
		cout<<"1";
	}
    fun(str,0,str.size());
    return 0;
}
