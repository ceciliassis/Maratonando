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


int cont;

class Union{
public:
  vector <int> p, rank, size;
  int maior = -1;
  
  Union(int n){
    p.resize(n);
    rank.assign(n,0);
    size.assign(n, 1);
    for(int i = 0;i<n;i++){
      p[i] = i;
    }
  }

  int qntsPais(){
    return p.size();
  }

  int UnionFind(int x){
    if(p[x] == x) return x;
    return (p[x] = UnionFind(p[x]));
  }
  
  bool isSame(int x, int y){
    return(UnionFind(x) == UnionFind(y));
  }

  int maiorConjunto(){
    return maior;
  }
  
  void Unionset(int i, int j){  
    if(isSame(i, j)){
      return;
    }
    --cont;

    int x = UnionFind(i);
    int y = UnionFind(j);

    if(rank[x] > rank[y]){
      p[y] = x;
      size[x]+=size[y]; // tamanho de x é o tamanho de y mais o dele
      int maa = max(size[x], size[y]);
      if(maa > maior) maior = maa;
     
      return;
    }

    p[x] = y;
    size[y]+=size[x]; // tamanho de y é o tamanho de x mais o dele
    int maa = max(size[x], size[y]);
    if(maa > maior) maior = maa;

    if(rank[x] == rank[y]) rank[y]++;

  }    
};

int main(){
 int n, e, a, b;
 scanf("%d %d", &n, &e);
 Union u(n+1);
 cont = n;
 char c;
 while(e--){
  scanf(" %c %d %d", &c, &a, &b);
  if(c == 'F') u.Unionset(a,b);
  else if (c == 'Q') printf("%s\n", u.isSame(a, b)? "sim" : "nao");
  else printf("%d %d\n", cont, u.maiorConjunto());
 }
  
 return 0;
}