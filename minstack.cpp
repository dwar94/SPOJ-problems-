#include<iostream>
#include<stack>
using namespace std;
stack<int> st,aux;
int getmin()
{
  return aux.top();	
}
int main()
{
	
	int n,temp;
	cout<<"Enter the no of elements of stack:";
	cin>>n;
	cout<<"enter the elements\n";
	while(n--)
	{
		cin>>temp;
		if(st.empty())
		 st.push(temp);
		else if(aux.empty())
		{
		
			if(temp<=st.top())
			 aux.push(temp);
			else 
			 aux.push(st.top());
			st.push(temp); 
		}
		else
		{
			if(temp<aux.top())
			{
			  aux.push(temp);	
			} 
			st.push(temp);
		}  
    }
    cout<<"min element of stack:";
    cout<<getmin()<<endl;
    return 0;    
	
}
