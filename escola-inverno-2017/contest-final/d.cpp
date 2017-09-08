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

int main(){

 int n, a, b, topo = 1;
 scanf("%d", &n);
 queue<int> fila;
 fila.push(topo);
 scanf("%d %d", &a,&b);
 ii intervalo;
 for(int i = 1; i <=n ; i++ ){
  scanf("%d %d", &a,&b);
  intervalo = mp(a-b, a+b);
  
  if(topo == a) continue;

  if(topo >= intervalo.F 
    && topo <=  intervalo.S){
    topo = a;
    fila.push(topo);
  }else{
    fila.pop();
    topo = a;
    fila.push(topo);
  }
 }

 printf("%d\n", fila.size());
 while(fila.size()>1){
  printf("%d ", fila.front());
  fila.pop();
 }
 printf("%d\n", fila.front());

 return 0;
}