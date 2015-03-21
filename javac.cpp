#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	while((cin>>str)!=0)
	{
		bool java=false,cpp=false,flag=false;
		if((str[0]>=65&&str[0]<=90)||(str[0]=='_')||(str[str.length()-1]=='_'))
		  cout<<"Error!\n";
		else
		{  
		 string temp="";
		 for(int i=0;i<str.length();i++)
		 {
		 	
			if((str[i]=='_'&&java))
			{
				cout<<"Error!\n";
				flag=true;
				break;
			}
			else if((str[i]>=65&&str[i]<=90)&&cpp)
			{
				cout<<"Error!\n";
				flag=true;
				break;
			}
			else
			{
			 if(str[i]=='_'&&str[i-1]!='_')
			 {
				cpp=true;
		     }
		     else if(str[i]=='_'&&str[i-1]=='_')
		     {
		     	cout<<"Error!\n";
		     	flag=true;
		     	break;
		     }
			 else if((str[i]>=65&&str[i]<=90))
			 {
				java=true;
				temp+="_";
				temp+=char(str[i]+32);
		     }
		     else
		       if(str[i-1]=='_')
		        temp+=str[i]-32;
		       else 
			   temp+=str[i];
		    }
		 }
		 if(!flag)
		  cout<<temp<<endl;
	    }
	}
	
	
	
	
	
	return 0;
}

