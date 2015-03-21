#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a[6],x;
	cout<<"Enter the array values\n";
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter x value:";
	cin>>x;
	int start=0,end=0,sum=0,minlength=0,maxsum=0;
	while(end<6)
	{
		while(sum<=x&&end<6)
		{
			sum+=a[end++];
			cout<<"end:"<<end<<endl;
		}
		while(sum>x&&start<6)
        {
        	if(minlength>end-start)
              minlength=end-start;
			sum-=a[start++];
        	cout<<"start:"<<start<<endl;
        	if(maxsum<sum)
              maxsum=sum;
        	cout<<"maxsum"<<maxsum<<endl;
        }
        
	}
	
	cout<<maxsum<<endl;
	//cout<<minlength<<endl;
	return 0;
}
