#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cassert>
#define readint(n) scanf("%d",&n)
using namespace std;
int main(){
int t,n,mem[1000],mem2[1000];
map<int,int> locate;
readint(t);
while(t--){
readint(n);
for(int i=0;i<n;i++){
readint(mem[i]);
mem2[i]=mem[i];
}
sort(mem2,mem2+n);
for(int i=0;i<n;i++){
locate[mem2[i]]=i;
}
for(int i=0;i<n;i++){
                mem[i]=locate[mem[i]];
}
int maxval=-1;
 
for(int start_finder=0;start_finder<n;start_finder++){
int cnt=0;
int to_find=start_finder;
for(int i=0;i<n;i++){
if(mem[i]==to_find){
cnt++;
to_find++;
}
}
maxval=max(maxval,cnt);
}
printf("%d\n",n-maxval);
}
return 0;
}
