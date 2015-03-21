#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int max=0,begin=0,end,temp,beg_temp;
    for(int i=0;i<v.size();i++)
    {
      temp=v[i];
      beg_temp=i;
      if(max<temp)
      {
          max=temp;
          begin=beg_temp;
          end=i;
      }
      for(int j=i+1;j<v.size();j++)
      {
          temp=temp^v[j];
          if(temp>max)
          {
              max=temp;
              begin=beg_temp;
              end=j;
          }

      }
    }
    cout<<max<<endl;
    cout<<begin+1<<" "<<end+1;

    return 0;
}
