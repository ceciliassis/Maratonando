#include <bits/stdc++.h>
using namespace std;

int mochila[30][40]; // linha (items) , coluna (capacidade)
int valores[30];
int pesos[30];


int mochila_binaria(int * cm, int * itens){
  for(int b = 0; b <= *cm; b++){
    mochila[0][b] = 0;
    for(int item = 1 ; item <= *itens; item++){
      int a = mochila[item-1][b];
      int aa;
      if(pesos[item] > b){
        aa = 0;
      } else {
        aa = mochila[item-1][b-pesos[item]]+valores[item];
      }
      mochila[item][b] = max(a,aa);
    }
  }
  return mochila[*itens][*cm];
}

int main(){
  int cap, itens;

  while(scanf("%d", &itens) && itens){
    scanf("%d", &cap);

    memset(mochila, 0, sizeof(mochila));
    memset(valores, 0, sizeof(valores));
    memset(pesos, 0, sizeof(pesos));

    for(int i = 1; i <= itens; i++){
      scanf("%d %d", &valores[i], &pesos[i]);
    }

    printf("%d min.\n", mochila_binaria(&cap, &itens));
  }
}