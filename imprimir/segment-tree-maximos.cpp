//recursivo
//sempre em cima de um vetor
//pre processada
// SEG TREE DE MAXIMO
int tree[4*100000+1]; // sempre 4 vezes o numero de elementos q vai ter no vetor
int a[100010];

// CONSTRUÇÃO DA SEGTREE
void build(int no, int left, int right){ 
  // no -> cada segmento, que é uma CAIXINHA, um intervalo
  // left, right intervalo - limite da esquerda, limite da direita
  int filhoEsq = no * 2, filhoDir = no * 2 + 1; // fazendo a sominha
  int mid = (left + right)/2;
  if(left == right){ // chegou na base
    tree[no] = a[right]; // maior é ele, entao retorna ele mesmo
    return;
  }
  build(filhoEsq, left, mid);
  build(filhoDir, mid+1, r);
  tree[no] = max(tree[filhoEsq], tree[filhoDir])
}

// MAIOR ELEMENTO DO INTERVALO
int query(int no, int left, int right, int i, int j){ // procurando
// no -> no que to. caixinhas
// left, right -> intervalo que ele é responsavel. i, j -> qal intervalo que qer o maximo
  if(right < i || left > j) return -INF; 
  // se estiver totalmente fora, pra frente, retorne o elemento neuto
  if(left >= i || right <= j) return tree[no];
  // completamente dentro do intervalo que estou procurando
  int filhoEsq = no * 2, filhoDir = no * 2 + 1; // fazendo a sominha para qual a proxima caixinha ir e abrir 
  int mid = (left + right)/2;
  int maxEsq = query(filhoEsq, left, mid, i, j);
  int maxDir = query(filhoDir, mid + 1, right, i, j);
  return max(maxEsq, maxDir);
}

// ALTERA VALOR NA ARVORE DE SEGUIMENTO E REPASSA A ALTERAÇÃO
void update(int no, int left, int right, int pos, int val){ 
  if(pos > right || pos < left) return ; // fora do meu intervalo
  if(left == right){
    // chegou no lugar que qer fazer o update
    tree[no] = val;
    return;
  }
  int filhoEsq = no * 2, filhoDir = no * 2 + 1; // fazendo a sominha
  int mid = (left + right)/2;
  update(filhoEsq, left, mid, pos, val);
  update(filhoDir, mid + 1, right, pos, val);
  tree[no] = max(tree[filhoEsq], tree[filhoDir]);
}

int main(){
  build(1, 1, N);
  return 0;
}