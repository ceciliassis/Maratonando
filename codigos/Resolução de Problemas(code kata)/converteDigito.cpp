#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int converteDigito(vector<int> &);

int main(){
  int n,o;
  vector<int> a;
  cin >> n;
  while(n--){
    cin >> o;
    a.push_back(o);
  }
  /*for(int i=1;i<=n;i++){
    cin >> o;
    a.push_back(o);
  }*/
  cout << converteDigito(a) << endl;
}

int converteDigito(vector<int> &a){
  int num=0 , tam = pow(10,a.size()-1);
  for(int i=0; i<a.size() ; i++ ){
    num += a[i]*tam;
    tam/=10;
  }
  return num;
}
