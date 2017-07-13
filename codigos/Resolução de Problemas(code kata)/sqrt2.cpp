#include <iostream>
#include <cmath>

using namespace std;

float sqrt1(float &);

int main(){
  float m;
  cin >> m;
  cout << sqrt1(m) << endl;
  return 0;
}

float sqrt1(float &m){
  float n =m;
  while((n*n)-m>0.0000001 ||(n*n)-m <0.0000001 )
    n=(n+m/n)/2;
  return n;
}
