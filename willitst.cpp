#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  long long int a;
  cin>>a;
  if((a&(-a))==a)
    cout<<"TAK";
  else
    cout<<"NIE";
return 0;	  
 }
