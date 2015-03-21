#include<stdio.h>
long long int countb=0,countw=0;
void func(int w,int b)
{
	 long long int temp=0,temp1=0,flag;
	 if(w==1&&b==0)
	  {
	  	countw++;
	  	return;
	  }
	 else if(b==1&&w==0)
	 {
	 	countb++;
	 	return;
	 }
	 else
	 {
	 	 temp=countw;
	 	 temp1=countb;
		 if(w>1 || (w>0&&b>0))
		 {
		 	func(w-1,b);
	 	 	temp=countw-temp;
	 		temp1=countb-temp1;
		 }
	 	 if(w>1 && (w>0&&b>0))
		 {  
	 	  countw+=temp;
	 	  countb+=temp1;
	     
	 	}
	 	 if(b>1)
		  func(w+1,b-2);
	} 
}
int main()
{
	int t,w,b;
	float res;
	scanf("%d",&t);
	while(t--)
	{
		 scanf("%d%d",&w,&b);
		 if(b==0)
		  printf("%f",(float)0);
		 else
		 {
		 	func(w,b);
		 	printf("%lld %lld\n",countw,countb);
		 	printf("%f\n",(float)countb/(countb+countw));
		 } 
		 countb=countw=0.0; 
	}
	return 0;
}
