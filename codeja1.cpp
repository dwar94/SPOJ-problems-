#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stdio.h>
#include<math.h>
#define PI 3.1415926535
using namespace std;
int main()
{
    int r,t,T,res,temp,temp1;
    scanf("%d",&T);
    for(int i=0;i<t;i++)
    {
      res=0;
	  temp=0;	
      scanf("%d%d",&r,&t);
      temp=(2*PI*r)+1;
      temp1=8*PI*t;
      res=(-temp+sqrt(pow(temp,2)+temp1))/4;
      printf("%d\n",res);
    }

	return 0;
}

