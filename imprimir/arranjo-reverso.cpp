#include <iostream>
#include <vector>
/*
Implemente um algoritmo que gera as amostras em ordem reversa
*/
using namespace std;

void arranjo_reverso(int, int, vector<int> &);

int main(){
  vector<int> a;
  int         k, n;   cin >> n >> k;
  
  a.resize(k);
  arranjo_reverso(n,0,a); // se jogar o k direto já extrapolou
  
  return 0;
}

void arranjo_reverso(int n, int k, vector<int> &a){
  if((unsigned)k==a.size()){ //indice zero
    for(auto i: a)
      cout << i << ' ' ;
    cout << endl;
    return;
  }
  else{
    for(int i=n;i>=1;i--){
      a[k]=i;
      arranjo_reverso(n,k+1,a);
    }
  }
    
}
