#include<string>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	string st="Iam Dwarakesh";
	char *ch=new char(st.length()+1);
	strcpy(ch,st.c_str());
	cout<<ch;
	
}
