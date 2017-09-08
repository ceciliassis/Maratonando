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

ii mod[] = {ii(-1, -2), // todo vertice tem oito arestas
                        ii(-1,  2),
                        ii(1 , -2),
                        ii(1 ,  2),
                        ii(-2, -1),
                        ii(-2,  1),
                        ii(2 , -1),
                        ii(2 ,  1)
                      }

int dis[10][10]; // i e j

bool valida(ii coord){
  return !(coord.F < 1 || coord.F > 8 || coord.S < 1 || coord.S > 8);
}

void bfs(int i, int j){
  memset(dist, INF, sizeof(dist)); // distancia para todo mundo é infinito
  queue<ii> q; // linha, coluna | visitar todos adjacentes | coordenadas de onde estou | quem posso enxergar

  dist[i][j] = 0;
  q.push(ii(i,j));
  while(!q.empty()){
    ii origem = q.front();
    q.pop();
    for(int i = 0; i < 8; i++){
      ii destino(origem.F + mod[i].F, origem.S + mod[i].S);
      if(valida(destino)){ // valida os limites
        if(dist[destino.F][destino.S] == INF){ // não foi visitado
          q.push(destino);
          dist[destino.F][destino.S] = dist[origem.F][origem.S] + 1; // custo para chegar la é o 
        }
      }
    }
  }


}

int main(){
  int iinicial, ifinal, jinicial, jfinal; // i - linha | j - coluna
  char a, b;
  while(scanf(" %c%d %c%d", &a, &iinicial, &b, &ifinal)!= EOF){
    jinicial = a - 'a' + 1; // matriz indexada de 1
    jfinal   = b - 'a' + 1; 
    bfs(iinicial, jinicial);
    printf("%d\n", dist[ifinal][jfinal]);
  }
}