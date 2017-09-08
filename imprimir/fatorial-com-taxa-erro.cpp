#include <iostream>

using namespace std;
float e();
int main(){
  
  cout << e() << endl;
  return 0;

}

float e(){
  int i=2;
  float termo=3, fatorial=1, eSoma=2;
  //pq fat de 0 é 1 e fat de 1 é 1 logo termo eSoma = 2
  while (termo>0.0000001){
    fatorial *= i++;
    termo = 1/fatorial;
    eSoma += termo;
  }
  return eSoma;
}
