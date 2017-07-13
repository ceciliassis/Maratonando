#include <iostream>
using namespace std;


void fibonacci();
int main(){
  fibonacci();
}

void fibonacci(){
  int t1=0,t2=1,t3=1, c=100;
  cout << t1 << endl;
  cout << t2 << endl;
  cout << t3 << endl;
  while(c--){
    int soma = t1+t2+t3;
    t1=t2;
    t2=t3;
    t3 =soma;
    cout << soma << endl;    
  }    
}
