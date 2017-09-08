// KRUSKAL - MST - minimum spanning tree - arvore geradora minima - grafo conexo, sem ciclos, de menor custo total - nao necessariamente caminho minimos
#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f //infinito
#define LINF 0x3f3f3f3f3f3f3f3fLL
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

class UnionFind{ // so serve para grafo nao direcionado
public:
  vi p, rank;
  UnionFind(int n){
    p.resize(n);
    rank.assign(n, 0);
    for(int i = 0; i < n; i++) p[i] = i; // pai dele é ele mesmo
  }

  int findSet(int i){
    return (p[i] == i)? i : (p[i] = findSet(p[i]));
  }

  bool isSameSet(int i, int j){ // fala se vai ter ciclo ou nao
    return findSet(i) == findSet(j);
  }

  void unionSet(int i, int j){
    int x = findSet(i);
    int y = findSet(j);
    if(x == y) return;
    if(rank[x] > rank[y]){
      p[y] = x;
      return;
    }

    p[x] = y;
    if(rank[x] == rank[y]) rank[y]++;
  }
  
};

class Aresta{
public:
  int peso, origem, destino;
  Aresta(int p, int o, int d){
    peso    = p;
    origem  = o;
    destino = d;
  }
  
  bool operator<(const Aresta a) const{
    if(peso != a.peso) return peso < a.peso;
    if(origem != a.origem) return origem < a.origem;
    return destino < a.destino;
  }
};
// set<pair<int, ii>> edgesList;
set<Aresta> edgesList;
int n, m; // quantidade de vertices

int kruskal(){ // MST
  set<Aresta>:: iterator it;
  UnionFind uf(n);
  int sum = 0;
  for(it = edgesList.begin(); it != edgesList.end(); it++){
    if(uf.isSameSet(it->origem, it->destino)) continue;
    uf.unionSet(it->origem, it->destino);
    sum += it->peso;
  }
}


int main(){
  // ordena as arestas por peso
  // perguntando se vai dar ciclo ou nao -> sabendo se o representante é o mesmo -> liga arestas não conectadas  
  while(scanf("%d %d", &n,&m) && (n|m)){
    edgesList.clear();
    int a, b, w, cont = 0;
    for(int i = 0; i < m ; i++){
      scanf("%d %d %d", &a, &b, &w);
      Aresta j(w,a,b);
      edgesList.insert(j);
      cont += w;
    }
    printf("%d\n", cont);
  }
  return 0;
}