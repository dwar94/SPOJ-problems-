#include <cstdio>
#include <algorithm>
#include <map>
#include<iostream>
using namespace std;

struct coder{
    int x,y;
    
    coder(){}
    coder(int _x, int _y) :
        x(_x), y(_y){}
    
    bool operator < (coder X)const{
        if(x != X.x) return x < X.x;
        return y < X.y;
    }
}a[300000];

int bit[100001];

void update(int idx){
    for(int x = idx;x <= 1000;x += x & -x)
     {   
		++bit[x];
		//cout<<x<<":"<<bit[x]<<endl;
     }
        
}

int query(int idx){
    int ret = 0;
    
    for(int x = idx;x > 0;x -= x & -x)
     {   
		ret += bit[x];
		cout<<x<<":"<<bit[x]<<endl;
     }
    return ret;
}

int main(){
    int N,ans,t,X,j;
    cin>>t;
    for(int l=0;l<t;l++)
    {
     ans=0;	
	 cin>>X;
	 cin>>X;
	 cin>>N;
	 for(int i=0;i<N;i++)
	 {  
	   cin>>a[i].x;
	   cin>>a[i].y;
      }
     sort(a,a + N);
    
       for(int i=N;i>=1;i--){
              for(j=i;j>=1 && a[j].x==a[i].x;j--)  ans+=query(a[j].y-1);
              for(j=i;j>=1 && a[j].x==a[i].x;j--)         update(a[j].y);
                 i=j+1;
      }
    printf("%d\n",ans);
    }
    return 0;
}

