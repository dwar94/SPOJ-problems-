#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct tower {
    int x,y,h;
    tower() {}
    tower(int a, int b, int c): x(a),y(b),h(c) {}
}btwr[90];
int d[3],h[90];
bool comp(tower x, tower y){ return(x.x < y.x && x.y < y.y); }
bool ord(tower x, tower y){ return(x.x < y.x) || (x.x == y.x && x.y < y.y); }
int main(){
    for(int bnum; scanf("%d",&bnum) && bnum; ){
        int i, j, last, maxh;
        memset(h,0,sizeof(h));
        for(last = i = 0; i < bnum; i++){
            scanf("%d %d %d", d, d+1, d+2);
            sort(d, d+3);
            btwr[last++] = tower(d[0], d[1], d[2]);
            if(d[2] != d[1]) btwr[last++] = tower(d[0], d[2], d[1]);
            if(d[0] != d[1]) btwr[last++] = tower(d[1], d[2], d[0]);
        }
        sort(btwr, btwr+last, ord);
        for(i = 0; i < last; i++){
            maxh = 0;
            for(j = 0; j < i; j++)
                if(comp(btwr[j],btwr[i])) maxh = max(maxh, h[j]);
            h[i] = maxh+btwr[i].h;
        }
        for(maxh = i = 0; i < last; i++) maxh = max(maxh, h[i]);
        printf("%d\n", maxh);
    }
    return 0;
}
