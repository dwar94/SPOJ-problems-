#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
	int t,n,temp;
	vector<int> v;
	scanint(t);
	while(t--)
	{
		int cnt=0,check=0;
		scanint(n);
		for(int i=0;i<n;i++)
		{
			scanint(temp);
			v.push_back(temp);
		}
		for(int i=n-1;i>0;i--)
		{
			if(v[i]>v[i-1])
			{
              check=1;
              break;
            }
        }
        if(check==1)
        {
        	next_permutaion(v.begin(),v.end());
        	for(int j=0;j<n;j++)
        	 printf("%d",v[j]);
        	printf("\n"); 
        }
        else
          printf("-1\n");
        v.clear();  
	}
	
	return 0;
}

