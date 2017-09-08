#include <bits/stdc++.h>
using namespace std;

class Union{
  public:
    vector <int> p, rank, size;
    
    Union(int n){
      p.resize(n);
      rank.assign(n,0);
      size.assign(n, 1);
      for(int i = 0;i<n;i++){
        p[i] = i;
      }
    }

    int UnionFind(int x){
      if(p[x] == x) return x;
      return (p[x] = UnionFind(p[x]));
    }
    
    bool isSame(int x, int y){
      return(UnionFind(x) == UnionFind(y));
    }
    
    void Unionset(int i, int j){  
      if(isSame(i, j)){
        return;
      }

      int x = UnionFind(i);
      int y = UnionFind(j);

      if(rank[x] > rank[y]){
        p[y] = x;
        size[x]+=size[y]; // tamanho de x é o tamanho de y mais o dele
        return;
      }

      p[x] = y;
      size[y]+=size[x]; // tamanho de y é o tamanho de x mais o dele

      if(rank[x] == rank[y]) rank[y]++;

    }
    int sizeset(int x){
      return size[UnionFind(x)];
    }
    
};

int main(){
  int a, b;
  cin >> a;
  while(a--){
    map<string, int> mapa;
    string s1, s2;
    int cont = 0;
    Union u(1000000);
    cin >> b;
    for(int i = 0;i<b;i++){
      cin >> s1 >> s2;
      if(mapa.count(s1) == 0){
        mapa[s1] = cont;
        cont++;
      }
      if(mapa.count(s2) == 0){
        mapa[s2] = cont;
        cont++;
      }
      
      int maior;
      //cout << mapa[s1]  << " " << mapa[s2] << endl;
      u.Unionset(mapa[s1], mapa[s2]);
      int r = u.sizeset(mapa[s1]);
      
      cout << r << endl;
    }
  }

}
