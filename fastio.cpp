#include<iostream>
#include<sstream>
#include<string.h>
#define D getchar_unlocked
using namespace std;
inline void fastRead_int(int *a)
{
    register char c=0;
    while(c<33) 
	 c=D();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=D();
    }
}
 
inline void fastRead_string(char *str)
{
    register char c=0;
    register int i = 0;
    while (c < 33)
        c = D();
    while (c > 65)
    {
        str[i] = c;
        c = D();
        i = i + 1;
    }
 
    str[i] = '\0';
}
 
 
int main()
{
 
  int n;
  char s[16];
  fastRead_int(&n);
  fastRead_string(s);
  return 0;
}
