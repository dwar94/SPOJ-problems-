#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<string>
#include<fstream>
using namespace std;
struct trie{
int count;
string str;
map<char,struct trie*> m;
};
typedef struct trie t;
void store(string st,t *temp)
{
  for(int i=0;i<st.length();i++)
  {
  	if(temp->m[st[i]]==0)
  	 {   
	   temp->m[st[i]]=new t;
	   //cout<<st[i];
    }
  	temp=temp->m[st[i]];    
  }	
}
void traverse(t *temp,string str)
{
	string s="";
	for(int i=0;i<str.length();i++)
	{
		if(temp->m[str[i]]!=0)
		{
			s+=str[i];
			temp=temp->m[str[i]];
		}     
	}
	cout<<s;
}
int main()
{ 
    ifstream ifs;
    string str,s;
    t *head=new t;
    head->count=0;
    ifs.open("input.txt",ios::in);
    while(getline(ifs,str))
    {
    	store(str,head);
    }
    cin>>s;
    traverse(head,s);
	return 0;
}
