#include <bits/stdc++.h>
using namespace std;

int main(){
  unordered_set<string> s;
  string joia;
  while(cin >> joia){
    s.insert(joia);
  }

  printf("%d\n", s.size() );

}