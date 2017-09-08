#include <bits/stdc++.h>
using namespace std;

int r[100010];
int n;

bool simula(int k){
  for(int i=1; i< n; i++){
    int dif = r[i]- r[i-1];
    if(dif > k) return false;
    if(dif == k) k--;
  }
  return true;
}

int main(){
  int t;
  scanf("%d", &t);
  for(int caso=1; caso <= t; caso++){
    int n;
    scanf("%d", &n);
    for(int i=0; i < n; i++){
      scanf("%d", &r[i]);
    }

    int low = 1, high = (int)(1e8), k; // tenho que inicializar sempre meu high e low, minino e maximo
    //valor muito alto pra high e muito baixo para low
    while(low <= high){ // busca binaria
      //testa ambos os casos, caso os dois lados nao respondam, dai o valor anterior
      int mid = (low + high)/2;
      if(simula(mid)){
        k = mid;
        high =  mid - 1;
      }else {
        low = mid + 1; 
      }
    }
    printf("Case %d: %d\n",caso, k);

  }
}