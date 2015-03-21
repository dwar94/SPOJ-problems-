#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
 string temp="";
string recur(string str,int k,int pos)
{
  if(k==0)
   return NULL;
  else
  { 
   temp+=str[pos]+recur(str,k-1,pos+1);
   cout<<temp<<endl;
   //return temp;
   temp=recur(str,k,pos+1);
   cout<<temp<<endl;
  }
}
int main()
{
	string str;
	cin>>str;
	for(int i=1;i<=str.size();i++)
	 recur(str,i,i-1);
}
