#include<iostream>
#include<cstring>
using namespace std;

long long bit1[100002],bit2[100002];

void update(long long bit[], int a, long long v){
    for(int i = a;i <= 100001;i += i & -i)
        bit[i] += v;
}

long long read(long long bit[], int a){
    long long ret = 0;
    for(int i = a;i > 0;i -= i & -i)
        ret += bit[i];
    
    return ret;
}

int main()
{
    int t,n,q;
    cin>>t;
    while(t--){
        cin>>n>>q;
        memset(bit1,0,sizeof bit1);
        memset(bit2,0,sizeof bit2);
        int op,l,r,v;
        for(int i = 0;i < q;++i){
            cin>>op>>l>>r;
             if(op == 0){
                scanf("%d",&v);
                update(bit1,l,v); 
				update(bit1,r + 1,-v);
                update(bit2,l,-(long long)v * (l - 1)); 
				update(bit2,r + 1,(long long)v * r);
            }
			else{
                cout<<read(bit1,r) * r + read(bit2,r) - read(bit1,l - 1) * (l - 1) - read(bit2,l - 1);
            }
        }
    }
    
    return 0
}
