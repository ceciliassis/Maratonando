int dist[100010];
vector<pair<int, int>> grafo[100010]; // significa qe cada pair segura o o no e a distancia

void dijkstra(int s){
  memset(dist, INF, sizeof(dist));
  dist[s] = 0;
  priority_queue<pair<int, int>, // tipo ( pair de distancia e no)
                 vector<pair<int, int>>, // container
                 greater<pair<int,int>> > pq; // comparador -> crescente
                 // na priority_queue a distancia é o proximo
  pq.push(make_pair(0, s));

  while(!pq.empty()){ // distancia da origem até o cara que estou -> caminho todo
    pair<int, int> topo = pq.top();
    pq.pop();
    int distancia = topo.first;
    int vertice   = topo.second;
    if(distancia > dist[vertice]) continue; // se ja tiver uma distancia melhor, passa direto!

    for(int i = 0; i < grafo[vertice].size(); i++){
      int destino = grafo[vertice][i].first;
      int custo   = grafo[vertice][i].second;
      if(dist[destino] > dist[vertice] + custo){
        dist[destino] = dist[vertice] + custo;
        pq.push(make_pair(dist[destino], destino));
      }
    }

  }

}


int main(){
  int v, u, w;
  scanf("%d %d %d", &v,&u,&w);
  grafo[v].push_back(make_pair(u,w));
  grafo[u].push_back(make_pair(v,w));

}