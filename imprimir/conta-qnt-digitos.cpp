#include <iostream>
using namespace std;


int contaDigitos(int);
int main(){
  cout << contaDigitos(59785) << endl;
}

int contaDigitos(int n){
  int conta=0;
  do{
    conta++;
    n/=10;
  }while(n!=0);
  return conta;
}
