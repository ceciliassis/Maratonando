class UnionFind{
  public:
    vector<int> p, rank; // rank == altura do conjunto i
    UnionFind(int n){ // iniciais
      p.resize(n); // quem é pai de qem?
      rank.assign(n,0); // inicializa o vector com tamanho n e valor 0
      for(int i=0;i<n;i++){
        p[i] = i; // inicialmente eu sou meu pai
      }
    }

    int findSet(int i){ // quem manda mesmo nele
      if(p[i] == i) return i;
      return (p[i] = findSet(p[i])); // quem manda no meu pai agora manda em mim
    }

    bool isSameSet(int i,int j){ // fazem parte do mesmo conjunto
      return findSet(i) == findSet(j);
    }

    void unionSet(int i, int j){ // juntando caras
      if(isSameSet(i,j)) return; // se eles fazem parte do mesmo conjunto, ja retorno

      int x = findSet(i); // acho pai de i
      int y = findSet(j); // acho pai de j

      if(rank[x] > rank[y]){ // maior arvore (quem manda em mais gente?)
        p[y] = x;
        return;
      }

      p[x] = y; // escolha arbitrária (tamanho da arvore de y pode ser maior ou igual ao tamanho da arvore de x)
      if(rank[x] == rank[y]) rank[y]++; // se as arvores forem do mesmo tamanho, alguem tem q ficar em cima, logo tamanho aumentou
    }

};