#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string.h>
#include<vector>
#include<queue>
 
using namespace std;
 
class node
{
       public: 
         int x;
         bool visit;
         node(){x=0; visit=false;}   
       };
queue <int> q;
vector <node> in;
vector <vector<int> > v(12); // keeping track of edge i -> j using ar[in[i]][j], when in[i]=in[j]
vector <bool> tr;
int counter=0; // for keeping only 2 consecutive equal node values. eg. 4444444444 and 44 are equivalent
char s[100001];
int test=0, temp1=0, store=0, k=0;
 
void bfs()
{
     node temp;
     int le = in.size()-1;
     int count = 0;
     while(!q.empty() && !(in[le].visit))
     {
         int t= q.size();
         
         for(int i=0; i<t; i++)
         {
               temp1=q.front();
               temp=in[temp1];
               q.pop();
               if(temp1>0 && !(in[temp1-1].visit))
               {
                    q.push(temp1-1);
                    in[temp1-1].visit=true;      
               }
               
               if(temp1<le && !(in[temp1+1].visit))
               {
                    q.push(temp1+1);
                    in[temp1+1].visit=true;                   
               }
               
               store = temp.x;
               if(!tr[temp.x])
                  {          
                    k = v[store].size();          
                    for(int j=0; j<k; j++)
                    {
                        q.push(v[store][j]);
                        in[v[store][j]].visit=true;    
                    }
                    tr[store]=true;
                  }
         }
         if(!q.empty())
         count++;            
     }
     printf("%d", count);
}
 
int main()
{
    node temp;
    in.clear();
    scanf("%s", s);
    int l=strlen(s);
    test=s[0]-48;
    temp.x=test;
    temp.visit=false;
    in.push_back(temp);
    counter=0;
    for(int i=0; i<=9; i++)
    {
       tr.push_back(false);
       v[i].clear();     
    }
    for(int i=1; i<l; i++)
    {
        if(counter>0 && test!=s[i]-48)
        {
             cout<<"chumma\n";
			 temp.x=test;
             temp.visit=false;
             in.push_back(temp);        
             v[test].push_back(in.size()-1);
             test=s[i]-48;
             temp.x=test;
             temp.visit=false;
             in.push_back(temp);
             v[test].push_back(in.size()-1);
             counter=0;         
        }
        
        else if(test!=s[i]-48)    
        {
             test=s[i]-48;
             temp.x=test;
             temp.visit=false;
             in.push_back(temp);
             v[test].push_back(in.size()-1);
             counter=0;   
        }
        
        else
        {
            counter++;
            if(i==l-1) 
            {
                 temp.x=test;
                 temp.visit=false;
                 in.push_back(temp);
                 v[test].push_back(in.size()-1);      
            }
        }
    }
    q.push(0);
    in[0].visit=true;   
    bfs();
    return 0;
} 
 
