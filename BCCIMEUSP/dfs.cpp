//https://www.youtube.com/watch?v=vfK3RtS50vQ
void dfs(int u){
  seen[u] = true;
  d[u] = tempo++; //tempo de descoberta
  for(int v: adj[u]){ //iteracao por todos os vertices da lista 
  	//de adjacencia
  	if(!seen[v]){ //nao foi visto ainda
  		p[v] = u; //pai de v == u
  		dfs(v); //dfs para ele
  	}
  }
  f[u] = tempo++; //tempo de finalizacao
}

