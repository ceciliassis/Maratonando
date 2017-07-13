//qual a mediana? UVA 10107

#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back //insere sempre no final
#define INF 0x3f3f3f3f //infinito
#define LINF 0x3f3f3f3f3f3f3f3fLL
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vector <int> v;

int main(){
  // insert desloca todo mundo para a esquerda e adiciona o item a esquerda
  int x;
  while(scanf("%d", &x)!= EOF){
    vector<int>::iterator it; // tem que ser a estrutura que deseja ser percorrida
    for(it = v.begin(); it != v.end(); it++){ //end, depois do ultimo
      if(*it >= x)
        break;
    }

    v.insert(it,x); //insere ordenado (posicao (tem q ser um iterator), valor)
    int mid = v.size()/2;
    int ans;
    if(v.size()%2== 0){ // tamanho par
      ans = (v[mid] + v[mid-1])/2;
    }else{
      ans = v[mid];
    }
    printf("%d\n", ans);
  }

}