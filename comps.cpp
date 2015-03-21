#include<stdio.h>
#include<iostream>
using namespace std;
const int MAX = 101;
int seq[MAX][MAX];
int main() {
	int t, s, c, i, j;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d", &s, &c);
		for(i = 0; i < s; i++) scanf("%d", &seq[0][i]);
		for(i = 1; i < s; i++)
			for(j = 0; j < s-i; j++)
				seq[i][j] = seq[i-1][j+1] - seq[i-1][j];
		for(i = 1; i <= c; i++) seq[s-1][i] = seq[s-1][i-1];
		for(i = s-2; i >= 0; i--)
			for(j = s-i; j < s-i+c; j++)
				seq[i][j] = seq[i+1][j-1] + seq[i][j-1];
		printf("%d", seq[0][s]);
		for(i = 1; i < c; i++) printf(" %d", seq[0][s+i]);
		printf("\n");
	}
	return 0;
}
