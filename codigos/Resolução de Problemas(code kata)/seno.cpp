#include <iostream>
#include <cmath>

using namespace std;

float seno(float);
int main(){
  float x ;
  cin >> x;
  cout << seno(x) << endl ;
}

float seno(float x){
  int i=1;
  float sen =0;
  float t = x;
  int sinal=1;
  while(abs(t) > 0.0000001){
    sen +=t;
    sinal *= -1;
    i+=2;
    t=(t*x*x)/((i-1)*i)*sinal;
  }
  return sen;

}
