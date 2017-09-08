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

int mod = 1000000007;
int a, b;

ll fast_exp(ll e){
  if(!e) return 1;
  ll y = fast_exp(e/2);
  a *= b;
  y = (a * b) % mod;
  return y;
}

int main(){
  ll c;
  scanf("%d %d %lld", &a,&b,&c);
  printf("%lld\n", fast_exp(c));
  return 0;
}