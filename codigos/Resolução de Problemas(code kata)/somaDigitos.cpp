#include <iostream>
using namespace std;


int somaDigitos(int);
int main(){
  cout << somaDigitos(1234) << endl;
}

int somaDigitos(int n){
  int soma=0;
  while(n!=0){
    soma += n%10;
    n/=10; 
  }
  return soma;
}
