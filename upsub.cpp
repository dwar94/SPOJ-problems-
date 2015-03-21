#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int lis[110];
string str;
vector<vector<int> > v;
vector<string> vstr;
vector<int> maxi;
void printlis(int maxi,string st)
{
	if(v[maxi].size()==0)
	{
		st+=str[0];
		reverse(st.begin(),st.end());
		vstr.push_back(st);
	}
	else
	{
		st+=str[maxi];
		for(int i=0;i<v[maxi].size();i++)
		{
			printlis(v[maxi][i],st);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 cin>>str;
	 int max=-1;
	 lis[0]=1;
	 for(int i=1;i<str.length();i++)
	 {
	 	lis[i]=1;
	 	vector<int> temp;
	 	for(int j=i-1;j>=0;j--)
	 	{
	 		
			 if(str[i]>=str[j]&&lis[i]<lis[j]+1)
	 		{
	 			lis[i]=lis[j]+1;
	 			temp.push_back(j);
	 		}
	 		else if(str[i]>=str[j]&&lis[i]==lis[j]+1)
	 		{
	 			temp.push_back(j);	
	 		}  
	 		if(max<lis[i])
	 		 max=lis[i];
	 	}
	 	for(int k=0;k<temp.size();k++)
	 	{
	 		cout<<temp[k]<<" ";
	 	}
	 	cout<<endl;
	 	v.push_back(temp);
	 }
	 cout<<max<<endl;
	 
	 for(int i=0;i<str.length();i++)
	 {
	 	if(lis[i]==max)
	 	 maxi.push_back(i);
	 	}
	 for(int i=0;i<maxi.size();i++)
	 {
	   printlis(maxi[i],"");
	 }
	 sort(vstr.begin(),vstr.end());
	 for(int i=0;i<vstr.size();i++)
	   cout<<vstr[i]<<endl;
}
return 0;	
}
