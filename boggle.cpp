#include<stdio.h>
#include<vector>
#include<map>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	map<string,int> st;
    string str[n],temp,temp1;
    vector<string> s;
    vector<vector<string> > v;
    int score[n+1];
	for(int i=0;i<=n;i++)
	{ 
	 getline(cin,temp1);
	 if(i>0)
	 str[i-1]=temp1;
	 score[i]=0;
    }
	 temp="";
	 v.clear();
	 s.clear();
	for(int j=0;j<n;j++) 
	{
      temp="";
	  for(int i=0;i<str[j].length();i++)
	  {
	 	if(str[j][i]!=' ')
	 	{
	 		temp+=str[j][i];
	 	}
	 	else
	 	{  
		   //cout<<temp<<endl;
		   st[temp]++;
		   cout<<"adding "<<temp<<" to s\n";
		   s.push_back(temp); 
		   temp="";
	    }
	    if(i==str[j].length()-1&&temp!="")
	     { 
	      cout<<"adding "<<temp<<" to s\n";
          st[temp]++;		 
		  s.push_back(temp);
	     }
	    for(int k=0;k<s.size();k++)
	     cout<<s[k]<<" ";
		 
	 }
	 v.push_back(s);
    }
    cout<<endl;
    for(int i=0;i<n;i++)
     for(int j=0;j<v[i].size();j++)
      cout<<v[i][j]<<" ";
    for(int j=0;j<n;j++)
     for(int i=0;i<v[j].size();i++)
    {
    	if(st[v[j][i]]==1)
    	{
    		cout<<"\n"<<v[j][i];
    		if(v[j][i].length()<=4)
		  	  score[j]+=1;
		  	else if(v[j][i].length()==5)
			  score[0]+=2;
			else if(v[j][i].length()==6)
			  score[j]+=3;
			else if(v[j][i].length()==7)
			  score[j]+=5;
			else        
		  	  score[j]+=11;
    	}
    }
    sort(score,score+n);
    printf("%d",score[n-1]);
	return 0;
}
