#include<stdio.h>
#include<map>
#include<iostream>
using namespace std;
int main()
{
	int t,m,stu,tea,i;
	scanf("%d",&t);
	while(t--)
	{
		map<int,int>M;
		int count=0,res=0;
		scanf("%d",&stu);
		int a[stu];
		for(i=0;i<stu;i++)
        {       
			   scanf("%d",&a[i]);
			   M[a[i]]++;
	    }
		scanf("%d",&tea);
		int b[tea];
		for(i=0;i<tea;i++)
		{
		       scanf("%d",&b[i]);
		       M[b[i]]++;
		       if(M[b[i]]>1)
		       {
		       	count++;
		       }
	    }
	    if(tea>stu)
	    {
	      if(count==0)
		   res=tea;
		  else 	
	      res=stu-count+tea-count;
	    }
	    else if(tea==stu)
	    {
	    	if(count==0)
	    	  res=tea;
	    	else
			  res=tea-count;  
	    }  
	    else
	    {
	    	if(count==0)
	    	{
	    		res=stu;
	    	}
	    	else
	    	{
	    		res=stu-count;
	    	}
	    }
	    printf("%d\n",res);
     }
	return 0;
}
