#define NORTH 0
#define EAST 1
#define SOUTH 2 //oest
#define WEST 3 //lest
pair<int, int> mod[5]; // modificador de direção na posicao
char nomeDir[] = {'N', 'E', 'S', 'W'}; 

bool morreu[60][60];
pair<int, int> pos; // posicao atual
int n, m, dir;

bool anda(){ // se n morreu retorna verdade caso contrario false
  pair<int, int> npos; // nova posicao
  npos.first = pos.first + mod[dir].first;
  npos.second = pos.second + mod[dir].second;

  if(npos.first < 0 || npos.first > n || npos.second < 0 || npos.second > m){ // caiu
    if(morreu[pos.first][pos.second]) return true;
    morreu[pos.first][pos.second] = true;
    return false;
  }

  pos = npos;
  return true;
}


int main(){
  map<char, int> mapa;
  mapa['N'] = NORTH;
  mapa['E'] = EAST;
  mapa['S'] = SOUTH;
  mapa['W'] = WEST;

  mod[NORTH] = make_pair(0, 1); // soma 1 no y
  mod[SOUTH] = make_pair(0, -1); //tira 1 no y
  mod[EAST]  = make_pair(1, 0); 
  mod[WEST]  = make_pair(-1, 0);

  scanf("%d %d", &n,&m);
  char d;
  while(scanf("%d %d %c", &pos.first, &pos.second, &d)!=EOF){
    dir = mapa[d];
    string s;
    cin >> s;
    bool ok = true;
  
    for(int i = 0; i < s.size(); i++){
      if(s[i] == 'R'){
        dir++; // sentido horario
        dir %= 4;
      }else if(s[i]=='L'){
        dir--; // sentido anti-horario
        if(dir<0) dir += 4;
      }else{
        ok = anda();
        if(!ok) break;
      }
    }

    printf("%d %d %c", pos.first, pos.second, nomeDir[dir]);
    printf("%s", ok? "\n": " LOST \n");

  }
}