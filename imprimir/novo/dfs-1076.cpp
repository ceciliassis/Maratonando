#include <bits/stdc++.h>
using namespace std;

bool vis[60];
vector<int> grafo[60]; // vetor de vector
int cont;


void dfs(int no){
  vis[no] = true;
  cont++;
  for(int i = 0; i < grafo[no].size(); i++){
    int b = grafo[no][i];
    if(!vis[b]) dfs(b);
  }
}

int main(){
  int v, e, casos, origem;
  scanf("%d", &casos);
  while(casos--){
    scanf("%d", &origem);
    scanf("%d %d", &v, &e);

    memset(vis, false, sizeof(vis));
    cont = -1;

    for(int i = 0; i <= v; i++){
      grafo[i].clear(); 
    }

    for(int i = 0; i < e; i++){
      int c, b;
      scanf("%d %d", &c, &b);
      grafo[c].push_back(b);
      grafo[b].push_back(c); 
    }

    dfs(origem);

    printf("%d\n", cont*2);
  } 

  return 0;
}