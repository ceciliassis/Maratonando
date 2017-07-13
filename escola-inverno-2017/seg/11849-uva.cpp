//cd
//todo elemento no set é um valor único
#include <bits/stdc++.h>
#define pb push_back //insere sempre no final
using namespace std;

int main(){
  set<int> jack, jill;
  int n,m;
  while(scanf("%d %d", &n, &m)!=EOF && (n | m)){ // ou bitwase == if
    for (int i = 0; i < n; ++i) {
      int x;
      scanf("%d", &x);
      jack.insert(x);
    }
    for (int i = 0; i < m; ++i) {
      int x;
      scanf("%d", &x);
      jill.insert(x);
    }
    set<int>::iterator it;
    int cont = 0;
    for(it = jack.begin(); it!= jack.end(); ++it){ // percorre a arvore em ordem (como um vertor ordenado)
      int x = *it; // menor valor da arvore == mais a esquerda possivel
      if(jill.find(x) != jill.end()) { // retorna um iterator para a posição do elemento se ele existir, se nao existir, retorna o end do set
        ++cont;
      }
    }
    printf("%d\n", cont);
    jack.clear();
    jill.clear();
  }
  return 0;
}