#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
using namespace std;
void search(vector<string> v,string pat,int n)
{
	int m=pat.size();
	char *ch=new char(m);
	strcpy(ch,pat.c_str());
	int l=0,r=n-1,mid,res;
	while(l<=r)
	{
	  mid=(l+r)/2;
	  char *ch1=new char(v[mid].size());
	  strcpy(ch1,v[mid].c_str());
	  res=strncmp(ch,ch1,n);
	  if(res==0)
	  {
	  	cout<<"pattern found\n";
	  	return;
	  }
	  else if(res<1)
	    r=mid-1;
	  else
	    l=mid+1;  
    }
    cout<<"pattern not found\n";
}
int main()
{
	int i;
	string st,temp="",pat;
	vector<string> v;
	cin>>st;
	cout<<"Enter the pattern:";
	cin>>pat;
	for(i=st.size()-1;i>=0;i--)
	{
		temp=st[i]+temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	search(v,pat,st.size());
	
	return 0;
}
