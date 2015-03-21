#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
	string str;
	long long int s,i,j,cnt=1,temp=1;
	cin>>str;
    s=str.size();	
    for(i=0;i<s;i++)
    {
    	if(((str[i]-'0')+(str[i+1]-'0'))==9)
    	{
			cnt=1;
			for(j=i+1;j<s;j++)
			{
				if(((str[j]-'0')+(str[j+1]-'0'))==9)
				  cnt++;
				else
				 break;
			}
			i=j;
    	}
        if((cnt%2==0))
       {
    	if(cnt==1)
    	  temp*=1;
    	else if(cnt==2)
    	  temp*=2;
    	else
		{
		  temp*=((cnt/2)+1);	 
		}
	   }
	    else 
	    {
	 	  temp*=1;
	    }
    }
    cout<<temp;
	 return 0;
}
