#include<iostream>
using namespace std;
int main()
{int t;cin>>t;while(t--){int n;cin>>n;int a[n][n];for(int i=0;i<n;i++)for(int j=0;j<=i;j++){cin>>a[i][j];if(i>0){if(j==0){a[i][j]+=a[i-1][j];}
 else if(j==i){a[i][j]+=a[i-1][j-1];}}}
(a[n-1][0]>a[n-1][n-1])?cout<<a[n-1][0]<<"\n":cout<<a[n-1][n-1]<<"\n";}
return 0;}
	

