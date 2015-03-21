#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
    string str;
    long long l,i,temp=0;
    int cnt=0;
    cin>>str;
    l=str.size();
    temp=str[0]-'0';
    for(i=1;i<l;i++)
    {
       temp+=str[i]-'0';
	   if(temp==9)
	   {
	   	 cnt++;
	   	 
	   }    
    }
    cout<<str[0];
	return 0;
}
