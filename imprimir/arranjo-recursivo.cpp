#include <iostream>
#include <vector>

using namespace std;

void arranjo(int, int, vector<int> &);

int main(){
  vector<int> a;
  int         k, n;   cin >> n >> k;
  
  a.resize(k);
  arranjo(n,0,a); // se jogar o k direto já extrapolou
  
  return 0;
}

void arranjo(int n, int k, vector<int> &a){
  if(k==a.size()){ //indice zero
    for(auto i: a)
      cout << i << ' ' ;
    cout << endl;
    return;
  }
  else{
    for(int i=1;i<=n;i++){
      a[k]=i;
      arranjo(n,k+1,a);
    }
  }
    
}
