//bfs (busca em largura - lado pra dps descer FILA) e dfs(busca em profundidade - fundo pra dps ladear PILHA-recursão)

#define push_back pb
#define push ps
#define pop pp


#include <bits/stdc++.h>
using namespace std;

vector<int> grafo[110]; // vetor de vector -> lista de adjacencia
int vis[110]; // visitações
int cont;

void dfs(int no){ // vertice que estou indo visitar
  vis[no] = 1;
  cont++;
  for(int i = 0; i < grafo[no].size(); i++){
    int b = grafo[no][i];
    if(!vis[b]) dfs(b);
  }
}

int main(){
  int v, e, caso = 1;
  while(scanf("%d %d", &v, &e) && (v|e)){
    memset(vis, 0, sizeof(vis));
    cont = 0;
    for(int i = 0; i <= v; i++){
      grafo[i].clear();
    }
    for(int i = 0; i < e; i++){
      int a,b;
      scanf("%d %d", &a, &b);
      grafo[a].pb(b);
      grafo[b].pb(a);
    }
    dfs(1);
    printf("Teste %d\n", caso++);
    printf("%s\n\n", cont == v ? "normal" : "falha");
  }

  return 0;
}