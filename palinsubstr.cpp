#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
void longestsubstr(string str)
{
	int start=0,maxlen=1;
	int low,high;
	for(int i=1;i<str.length();i++)
	{
		low=i-1;
		high=i;
		while(low>=0&&high<str.length()&&str[low]==str[high])
		{
			if(high-low+1>maxlen)
			{
			 start=low;
			 maxlen=high-low+1;
		    }
		    high++;
		    low--;
		}
		low=i-1;
		high=i+1;
		while(low>=0&&high<str.length()&&str[low]==str[high]) 
		{
			if(high-low+1>maxlen)
			{
				start=low;
				maxlen=high-low+1;
			}
			high++;
			low--;
		} 
	}
	for(int i=start;i<maxlen+start;i++)
	{
		cout<<str[i];
	}
}
int main()
{
	string str;
	cin>>str;
	longestsubstr(str);
	return 0;
}

