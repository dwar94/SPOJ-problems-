#include<stdio.h>
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int factor(string st)
{
	cout<<"entry str:"<<st<<endl;
	string temp="";
	int cnt=0;
	for(int i=0;i<st.length();i++)
	{
		temp+=st[i];
		for(int j=i+1;j<st.length();j++)
		{
			cout<<st.substr(j,j+temp.length()-1)<<" "<<j+temp.length()-1<<endl;
			if(temp==st.substr(j,j+temp.length()-1))
			{ 
			 if(factor(st.substr(j+1,st.length()))!=0)
			    cnt+=2;
             else
			    break; 
			 
		    }
			else
			 break; 
		}
	}
	return cnt;
}
int main()
{
	int t;
	string str,temp;
	scanf("%d",&t);
	while(t--)
	{
		cin>>str;
		cout<<factor(str);
		
	}
	
	
	return 0;
}
