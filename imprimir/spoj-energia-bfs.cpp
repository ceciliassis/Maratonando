//bfs (busca em largura - lado pra dps descer FILA) e dfs(busca em profundidade - fundo pra dps ladear PILHA-recursão)

#define push_back pb
#define push ps
#define pop pp


#include <bits/stdc++.h>
using namespace std;

vector<int> grafo[110]; // vetor de vector -> lista de adjacencia
int vis[110]; // visitações


int bfs(int s){
  queue<int> q;
  vis[s] = 1; // marca como visitado
  int cont = 1;
  q.ps(s); // origem
  while(!q.empty()){
    int a = q.front();
    q.pp();
    for(int i=0; i< grafo[a].size(); i++){
      int b = grafo[a][i]; // percorrendo o vector de adjacents
      if(vis[b]) continue; // se ja visitou, passa direto
      cont++;
      vis[b] = 1;
      q.ps(b);
    }
  }

  return cont;
}

int main(){
  int v, e, caso = 1;
  while(scanf("%d %d", &v, &e) && (v|e)){
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i <= v; i++){
      grafo[i].clear();
    }
    for(int i = 0; i < e; i++){
      int a,b;
      scanf("%d %d", &a, &b);
      grafo[a].pb(b);
      grafo[b].pb(a);
    }
    printf("Teste %d\n", caso++);
    printf("%s\n\n", bfs(1) == v? "normal" : "falha");
  }

  return 0;
}