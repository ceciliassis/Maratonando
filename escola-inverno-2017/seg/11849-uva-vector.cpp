//cd
//todo elemento no set é um valor único
#include <bits/stdc++.h>
#define pb push_back //insere sempre no final
using namespace std;

int main(){
  vector<int> jack;
  set<int> jill;
  int n,m;
  while(scanf("%d %d", &n, &m)!=EOF && (n | m)){ // ou bitwase == if
    for (int i = 0; i < n; ++i) {
      int x;
      scanf("%d", &x);
      jack.pb(x);
    }
    for (int i = 0; i < m; ++i) {
      int x;
      scanf("%d", &x);
      jill.insert(x);
    }
    int cont = 0;
    for(int i= 0; i < jack.size(); ++i){ // percorre a arvore em ordem (como um vertor ordenado)
      if(jill.count(jack[i])) { //sempre retorna ou 1 ou 0
        ++cont;
      }
    }
    printf("%d\n", cont);
  }
  return 0;
}