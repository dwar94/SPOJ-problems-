 #include<stdio.h>
 #include<vector>
 #include<queue>
 using namespace std;
 int main()
 {
  vector<int> A,B;
  deque<int> Q;
  int n,k;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
  	scanf("%d",&k);
  	A.push_back(k);
  }
  scanf("%d",&k);
  for (int i = 0; i < k; i++) {
    while (!Q.empty() && A[i] >= A[Q.back()])
      Q.pop_back();
    Q.push_back(i);
  }
  for (int i = k; i < n; i++) {
    B[i-k] = A[Q.front()];
    while (!Q.empty() && A[i] >= A[Q.back()])
      Q.pop_back();
    while (!Q.empty() && Q.front() <= i-k)
      Q.pop_front();
    Q.push_back(i);
  }
  B[n-k] = A[Q.front()];
  for(int i=0;i<n-k+1;i++)
   printf("%d ",B[i]);
}
