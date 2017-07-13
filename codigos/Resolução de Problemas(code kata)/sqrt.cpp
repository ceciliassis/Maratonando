#include <iostream>

using namespace std;

float sqrt(float &);
int main(){
  float m;
  cin >> m;
  cout << sqrt(m) << endl;
  return 0;
}

float sqrt(float &m){
  float n=1;
  float inc=1;
  float a = m-0.0001;
  while((n*n < a) || (n*n>m)){
    while(n*n<=m)
      n=n+inc;
    n=n-inc;
    inc /= 10;
  }
  return n;

}
