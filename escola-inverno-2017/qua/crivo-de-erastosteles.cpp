// descoberta de primos de numero eficiente
// faz preprocessamento - identifica todos os primos até 10⁷
// se for divisivel por numero composto, basta dividir por primo
// bitset onde se o valor for zero o numero é primo, caso contrario é um (POSICAO)
// marca todos os multiplos de primo como nao primo, exceto os pares ( A PARTIR do quadrado dele! pq ele antes dele vai ser composto)
// limite do crivo é 10¹⁴
// consegue achar ate o quadrado do crivo 

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

bitset<10000010> primo; //primo ou nao
vector<int> primos; //lista dos primos

void crivo(){
  primos.pb(2);
  primo[1] = 1;
  for(ll i = 3; i <= 10000000; i += 2){
    if(primo[i]) continue;
    for(ll j = i * i; j <= 1000000; j += i){ // começa do quadrado
      primo[j] = 1;
    }
    primos.pb(i);
  }
}

bool isPrime(ll num){
  if(num == 2) return true;
  if(num % 2 == 0) return false;
  if(num <= 10000000) return !primo[num];
  for(int i = 0; i < primos.size(); i++){
    if(num % primos[i] == 0) return false;
    if(primos[i] > sqrt(num)) break; // nao precisa ir acima da raiz quadrada
  }
  return true;
}


int main(){
  crivo();
  long long n;
  while(scanf("%lld", &n) && n){
    printf("%s\n", isPrime(n)? "yes": "no");
  }

}