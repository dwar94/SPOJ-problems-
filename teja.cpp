#include<stdio.h>
#include<string>
#include<map>
using namespace std;
int main()
{
  char str[20];
  int i;
  map<string,int> M;
  map<string,int>::iterator it;
  for(i=0;i<5;i++)
  {
  	scanf("%s",&str);
  	M[str]++;
  }
  for(it=M.begin();it!=M.end();it++)
  {
  	printf("%s %d\n",(*it).first.c_str(),(*it).second);
  } 
  return 0;
}
