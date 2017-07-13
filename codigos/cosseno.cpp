#include <iostream>
#include <cmath>

using namespace std;

float cosseno(float);


int main(){
  float x;
  cin >> x;
  cout << cosseno(x) << endl;
  return 0;
}

float cosseno(float x){
//calculo em radianos
  int i=2, sinal=-1;
  float t = ((x*x)/i)*sinal; //primeiro termo é negativo
  float cos=1; //primeiro numero da sequencia é 1
  while(abs(t) > 0.0000001){
    cos +=t; //na primeira passada soma com o negativo
    sinal *= -1; //inverte o sinal
    i+=2; //na primeira passada vai para 4
    t=(t*x*x)/((i-1)*i)*sinal; 
  }
  return cos;
}
