#include <iostream>
#include <string>
using namespace std;


bool ehFibonacci(int, int);

int main(){
  int a, b;
  cin >> a >> b;
  string resp = ehFibonacci(a,b) ? "pertencem a fibonacci" : 
                                    "ñ pertencem a fibonacci";
  cout << resp << endl;
}

bool ehFibonacci(int a, int b){
  int t1 = 0, t2 = 1,soma=0;
  while(soma < 1000){
    if(t1==a && t2==b)
      return true;
    else{
      soma = t1 + t2;
      t1 = t2;
      t2 = soma;
      cout << soma << endl;  
    }
  }
  return false;    
}
