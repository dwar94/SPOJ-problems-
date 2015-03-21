#include<stdio.h>
#include<iostream>
#define gc getchar_unlocked
using namespace std;
void scanint(long long &x)
{
    register long long c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
 long long t;
 int temp,m;
 int res[10][5]={{0,0,0,0,1},
                 {1,1,1,1,1},
                 {6,2,4,8,4},
                 {1,3,9,7,4},
                 {6,4,0,0,2},
                 {5,0,0,0,1},
                 {6,0,0,0,1},
                 {1,7,9,3,4},
                 {6,8,4,2,4},
                 {1,9,0,0,2},
    };
 scanint(t);
 while(t--)
 {
  long long a,b;
  scanint(a);
  scanint(b);
  if(b==0){
   printf("1\n");
   continue;}
  temp = a % 10;
  m = b%res[temp][4];
  printf("%d\n",res[temp][m]);
 }
 return 0;
}
