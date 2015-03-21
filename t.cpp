#include <stdio.h>
#include <math.h>
#define MAX 100
#define LMT 100
#define LEN 576
unsigned flag[MAX/64];
int a[LEN+10], total;
#define ifc(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define isc(x) (flag[x>>6]|=(1<<((x>>1)&31)))
int main()
{
	int i, j, k;
	for(i=3; i<LMT; i+=2)
	{
		printf("ifc: %d ",ifc(i));
		if(!ifc(i))#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main (int argc, char* argv[])
{
 //Create the various different variables required
 int limit = 1000000;
 int root = ceil(sqrt(limit));
 bool sieve[limit];
 int primes[(limit/2)+1];
 int insert = 2;
 primes[0] = 2;
 primes[1] = 3;
 for (int z = 0; z < limit; z++) sieve[z] = false; //Not all compilers have false as the default boolean value
 for (int x = 1; x <= root; x++)
 {
 for (int y = 1; y <= root; y++)
 {
 //Main part of Sieve of Atkin
 int n = (4*x*x)+(y*y);
 if (n <= limit && (n % 12 == 1 || n % 12 == 5)) sieve[n] ^= true;
 n = (3*x*x)+(y*y);
 if (n <= limit && n % 12 == 7) sieve[n] ^= true;
 n = (3*x*x)-(y*y);
 if (x > y && n <= limit && n % 12 == 11) sieve[n] ^= true;
 }
 }
 //Mark all multiples of squares as non-prime
 for (int r = 5; r <= root; r++) if (sieve[r]) for (int i = r*r; i < limit; i += r*r) sieve[i] = false;
 //Add into prime array
 for (int a = 5; a < limit; a++)
 {
 if (sieve[a])
 {
 primes[insert] = a;
 insert++;
 }
 }
			for(j=i*i,k=i<<1; j<MAX; j+=k)
			{	
			 isc(j);
			 printf("isc: %d %d",flag[j>>6],j>>6);
		    }
    }
	a[0] = -1;
	a[1] = 2;
	for(i=3,j=2; i<MAX; i+=2)
		if(!ifc(i))
			a[j++] = i;
	return 0;		
}
