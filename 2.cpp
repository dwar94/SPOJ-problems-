#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int gcd(int a, int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    cout<<a<<endl;
    return a;
}

int main()
{
	int t,n,temp,f;
	cin>>t;
	while(t--)
	{
		 cin>>n;
		 f=0;
		 vector<int> v;
		 for(int i=0;i<n;i++)
		 { 
		  cin>>temp;
		  v.push_back(temp);
	     }
		 for(int i=0;i<v.size();i++)
		 {
		  if(f==0)  
		  { 
		  for(int j=i;j<v.size();j++)
		   {  
			 if(gcd(v[i],v[j])==1)
		     { 
			  cout<<"YES"<<endl;
			  f=1;
		      break;
		     }
             else if(i==v.size()-1)
			  cout<<"NO"<<endl;		 
	       }
         }
         else
           break;
         }
  }
	return 0;
}
