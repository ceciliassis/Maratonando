/* Uma maneira de gerar as amostras iterativamente é começar com a permutação {1,1,..,1}. A próxima permutação é gerada escaneando a permutação atual da direita para esquerda até encontrar um elemento que não chegou no valor máximo. Este elemento é incrementado em 1 e todos os elementos para a direita são resetados para o valor mínimo (1). O processo se repete até que todas as amostras tenham sido geradas.
Escreva este algoritmo e implemente-o.
* */

#include <iostream>
#include <vector>

using namespace std;

void arranjo(int, vector<int> &);

int main(){
  
  int         k, n;   cin >> n >> k;
  //k -> tamanho da amostra
  vector<int> a(k,1);
   
  arranjo(n,a); // se jogar o k direto já extrapolou
  
  return 0;
}

void arranjo(int n, vector<int> &a){
  int i = a.size()-1;
  for(i;i>=0;i--){ //percorre de tras para frente

    if(a[i]<n){
     for(auto j: a)
      cout << j << ' ';
     cout << endl;
      a[i]++;
      for(i=i+1;i<a.size();i++)
        a[i]=1;
      
    }
  }
  
  for(auto j: a)
      cout << j << ' ';
  cout << endl;
    
    
}
