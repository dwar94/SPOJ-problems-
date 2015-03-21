#include<iostream>
#include<algorithm>
using namespace std;
create trie()
{
  	  vector<char> cur;
	  for(int i=0;i<wrds.length();i++)
  	  {
  		wrd=wrds[i];
  		for(int j=0;j<wrd.length();j++)
  		{
  			l=ls[j];
  			pos=cur[l];
  			if(pos==NULL)
  			{
  				cur[l]=j;
  				if(j==wrd.length-1)
  				  cur[l]=0;
  			}
  			else if(pos==0)
  			  cur[l]=
  			 
  		}
  	}
}
int main()
{
	
	return 0;
}
