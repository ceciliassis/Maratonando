
int n, m;
char grid[110][110];
bool vis[110][110];

void dfs(int x, int y){
  if(x < 0 || x >= n 
    || y < 0 || y >=m 
    || grid[x][y] !='@'
    || vis[x][y]) return;

  vis[x][y] = true;

  for(int i =-1; i <= 1; i++){
    for(int j = -1; j <=; j++){
      dfs(x+i, y+j);
    }
  }

}


int main(){
  while(scanf("%d %d", &n, &m) && (n|m)){
    int cont = 0;
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i < n; i++)
      scanf("%s", grid[i]);
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(grid[i][j]!='@') continue;
        if(vis[i][j]) continue;
        dfs(i,j);
        cont++; 
      }
    }

  }
}