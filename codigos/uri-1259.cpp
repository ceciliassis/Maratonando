#include <bits/stdc++.h>
using namespace std;

int main(){
  int c, n;
  scanf("%d", &c);
  vector<int> par;
  vector<int> im;

  while(c--){
    scanf("%d", &n);
    n = n < 0 ? -n : n;

    if(n%2==0) 
      par.push_back(n);
    else 
      im.push_back(n);
  }

  sort(par.begin(), par.end());
  sort(im.begin(), im.end(), greater<int>());

  // for (std::set<int>::iterator it=im.begin(); it!=im.end(); ++it)
  //   std::cout << *it << endl; 

  // for (std::set<int>::iterator it=par.begin(); it!=par.end(); ++it)
  //   std::cout << *it << endl; 

  for(auto i: par){
    printf("%d\n", i);
  }
  for(auto i: im){
    printf("%d\n", i);
  }

  return 0;
}