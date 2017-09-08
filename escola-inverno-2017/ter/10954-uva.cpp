#include <bits/stdc++.h>

using namespace std;

//UVA10954
int main(){
  int n;

  while(scanf("%d",&n) && n)  {
    priority_queue<int,vector<int>,greater<int> > pq; //vector<int>,greater<int> (base(sempre vector do tipo)/comparador)
    int x;                        //(necessário apenas se especificar comparador)
    for(int i=0;i<n;i++)    {
      scanf("%d",&x);
      pq.push(x);
    }
    int total=0;
    while(pq.size()>1)    {
      int a=pq.top();
      pq.pop();
      int b=pq.top();
      pq.pop();
      pq.push(a+b);
      total+=a+b;
    }
    printf("%d\n",total);
  }

  return 0;
}