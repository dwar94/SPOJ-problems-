#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int t;
	double a, b, c, ga, gb, gc, s, r, m;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%lf%lf%lf%lf", &a, &ga, &gb, &gc);
		s = 3.0*a*ga/2.0;
		b = 2.0*s/3.0/gb;
		c = 2.0*s/3.0/gc;
		r = a*b*c/4.0/s;
		m = 4.0*(r*r-(a*a+b*b+c*c)/9.0);
		m = (m<0.0) ? 0.0 : m;
		printf("%.3lf %.3lf\n", s, sqrt(m));
	}
	return 0;
}

