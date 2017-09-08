#include <bits/stdc++.h>
using namespace std;

int main(){
  int c;
  scanf("%d", &c);
  while(c--){
    int l, m, a, cont = 0;
    string side;
    queue<int> left, right;
    scanf("%d %d", &l, &m);
    l *= 100; // m para cm
    
    for(int i=0; i < m; i++){
      cin >> a >> side;
      if(side == "left") left.push(a);
      else right.push(a);
    }

    while(!left.empty() || !right.empty()){
      int load = 0;
      while(!left.empty() && load + left.front() <= l){
        load += left.front();
        left.pop();
      }
      if(load == 0 && right.empty()) break;
      cont++;
      load = 0;
      while(!right.empty() && load + right.front() <= l){
        load += right.front();
        right.pop();
      }
      if(load == 0 && left.empty()) break;
      cont++;
    }
    printf("%d\n", cont);
  }
  return 0;
}