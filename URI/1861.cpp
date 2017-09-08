#include <bits/stdc++.h>
using namespace std;

int main(){
  map<string, int> murders;
  string a,b;
  set<string> murdered;
  while(cin >> a >> b){
    murdered.insert(b);
    murders[a]++;
  }

  printf("HALL OF MURDERERS\n");
  map<string, int>::iterator it;
  for(it = murders.begin(); it != murders.end(); it++){
    if(murdered.find(it->first) == murdered.end())
      printf("%s %d\n", it->first.c_str(), it->second);
  }
}