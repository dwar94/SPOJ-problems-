#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int R,C;
	scanf("%d",&R);
	scanf("%d",&C);
	int a[R][C],i,j;
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	 scanf("%d",&a[i][j]);
    int sr=0,sc=0,er,ec;
    er=R-1;
    ec=C-1;
    while(sr<=er && sc<=ec)
    {
        for(i=sc;i<=ec;++i)
            cout<<a[sr][i]<<" ";
        ++sr;

        for(i=sr;i<=er;++i) 
            cout<<a[i][ec]<<" ";
        ec--;

        if(sr<=er)  
        {
            for(i=ec;i>=sc;--i)
                cout<<a[er][i]<<" ";
            er--;   
        }

        if(sc<=ec)
        {
            for(i=er;i>=sr;--i)
                cout<<a[i][sc]<<" ";
            ++sc;   
        }

    }
    return 0;
}
