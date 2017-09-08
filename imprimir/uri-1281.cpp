#include <bits/stdc++.h>
using namespace std;

int main(){
  int cas;
  scanf("%d", &cas);
  map<string,float> prods; //nome do produto (KEY) valor (VALUE)

  while(cas--){
    int tamLista;
    string nomeProd;
    float valProd;
    
    scanf("%d", &tamLista);

    for(int i=0;i<tamLista;i++){
      cin >> nomeProd >> valProd;
      prods[nomeProd] = valProd; //definindo a chave e o valor pra ela
    }

    scanf("%d", &tamLista);

    float soma = 0;

    int qtd;
    for(int i=0;i<tamLista;i++){
      cin >> nomeProd >> qtd;
      valProd = prods.find(nomeProd) -> second; //chave (FIRST) valor (SECOND)
      soma += (qtd*valProd);
    }

    printf("R$ %.2f\n", soma );
    prods.clear();

  }
}