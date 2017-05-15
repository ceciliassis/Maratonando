#include <bits/stdc++.h>
using namespace std;

struct compe{
  bool operator() (const int& lhs, const int& rhs) const
  {return lhs > rhs;}
};

int main(){
  int c, n;
  scanf("%d", &c);
  set<int> par;
  set<int,compe> im;

  while(c--){
    scanf("%d", &n);
    n = n < 0 ? -n : n;

    if(n%2==0) 
      par.insert(n);
    else 
      im.insert(n);
  }

  for(auto i: par){
    printf("%d\n", i);
  }
  for(auto i: im){
    printf("%d\n", i);
  }

  return 0;
}