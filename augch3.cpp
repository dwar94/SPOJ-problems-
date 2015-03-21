#include<iostream>
#include<stdio.h>
#include<cstring>
#include<climits>
#include<map>
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
//nodes in adjacency list of graph
typedef struct node
{
    int dest;
    int w;
    node *next;
}node;
 
typedef struct graph
{
    int v;
    node** head;
 
}graph;
typedef struct mnode
{
    int w,v;
}mnode;
typedef struct mheap
{
    int n;
    int v;
    int *pos;
 
    mnode **arr;
 
}mheap;
//add edge to the adjaceny list of each vertex
void addedge(graph *g,int s,int d,int w)
{
node* n = new node;
n->dest=d;
n->w=w;
node *temp;
temp = g->head[s];
g->head[s]=n;
n->next=temp;
 
}
 
//add a node to mheap
mnode* addmnode(int v,int w)
{
mnode *t = new mnode;
t->v=v;
t->w=w;
return t;
}
void swapp(mnode **a,mnode **b,mheap *m)
{
    int t;
    t=m->pos[(*a)->v];
    m->pos[(*a)->v]=m->pos[(*b)->v];
    m->pos[(*b)->v]=t;
    mnode *temp = *a;
    *a=*b;
    *b=temp;
 
 
}
 
//minheapify the heap
void minheapify(mheap *m,int from)
{
    int i = from;
    while(i>1&&(m->arr[i/2]->w>m->arr[i]->w))
    {
        swapp(&m->arr[i/2],&m->arr[i],m);
        i=i/2;
 
    }
 
}
//decrease key i.e., the edge weight
void decreaseKey(int v,mheap* m,int newwt)
{
int i = m->pos[v];
m->arr[i]->w=newwt;
minheapify(m,i);
 
 
}
int left(int i,mheap* m)
{
    if(2*i<=m->n)
    return 2*i;
    else
    return -1;
}
int right(int i,mheap *m)
{
 
    if(2*i+1<=m->n)
    return 2*i+1;
    else
    return -1;
 
}
// heap down the array after extracting the top most element from the array
void heapdown(mheap *m,int i)
{
 
    int l,r,mi=i;
    l = left(i,m);
    r = right(i,m);
    if(l!=-1&&m->arr[l]->w<m->arr[i]->w)
    {
        mi=l;
    }
    if(r!=-1&&m->arr[r]->w<m->arr[mi]->w)
    {
        mi=r;
    }
    if(mi!=i)
    {
        swapp(&m->arr[mi],&m->arr[i],m);
        heapdown(m,mi);
 
    }
 
 
}
bool isempty(mheap *m)
{
    if(m->n==0)
    return true;
    else
    return false;
}
//extract root and replace last as root and heapify down
mnode* extractmin(mheap *m)
{
    if(m->n==0)
        return NULL;
    else if(m->n==1)
    {
        m->n--;
        return m->arr[1];
 
    }
    else
    {
    mnode* ans = m->arr[1];
    swapp(&m->arr[1],&m->arr[m->n],m);
    --m->n;
    heapdown(m,1);
    return ans;
    }
 
}
 
 
 
 
//insert into heap
void insertheap(mheap* m,int val,int k)
{
m->n++;
m->pos[val]=m->n;
m->arr[m->n]=addmnode(val,k);
minheapify(m,m->n);
}
 
//print contents of graph
void printlist(graph *g)
{
for(int i=1;i<=g->v;i++)
{
    cout<<i<<" ";
    node* temp=g->head[i];
    while(temp)
    {
    cout<<"("<<temp->dest<<","<<temp->w<<")  ";
    temp=temp->next;
    }
    cout<<"\n";
 
}
 
 
}
void printheap(mheap *m)
{
for(int i=1;i<=m->n;i++)
{
    cout<<"("<<m->arr[i]->v<<","<<m->arr[i]->w<<")"<<" ";
}
cout<<endl;
}
int main()
{
            int v,s,d,e;
            scanint(v);
            graph *g;
            g = new graph;
            g->v=v;
            g->head = new node*[v+1];
            for(int i=0;i<=v;i++)
            g->head[i]=NULL;
 
            scanint(e);
                for(int j=1;j<=e;j++)
                {
                scanint(s);
                scanint(d);
                addedge(g,s,d,0);
                addedge(g,d,s,1);
                }
                int st,des;
                    st = 1;
                    des = v;
 
                    mheap *m = new mheap;
                    m->v = v;
                    m->n=0;
                    m->pos=new int[v+1];
                    memset(m->pos,-1,sizeof(int)*(v+1));
                    m->arr = new mnode*[v+1];
                    insertheap(m,st,0);
                    int dis[v+1];
                    int par[v+1];
                    memset(dis,-1,sizeof(dis));
                    dis[st]=0;
                    par[st]=st;
 
                    while(!isempty(m))
                    {
                        mnode *temp = extractmin(m);
                        int i = temp->v;
                        node *tm = g->head[i];
                        int d;
                        while(tm)
                        {
                            d = dis[temp->v]+tm->w;
                            if(dis[tm->dest]==-1)
                            {
                                dis[tm->dest]=d;
                                par[tm->dest]=temp->v;
                                insertheap(m,tm->dest,dis[tm->dest]);
                            }
                            else if(d<dis[tm->dest])
                            {
							    dis[tm->dest]=d;
                                par[tm->dest]=temp->v;
                                decreaseKey(tm->dest,m,dis[tm->dest]);
 
                            }
 
                        tm=tm->next;
                        }
                    
 
                    }
                    printf("%d\n",dis[des]);
                    delete m;
    delete g;
 

 
return 0;
}
