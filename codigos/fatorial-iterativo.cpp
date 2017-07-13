#include<iostream>
#include<stdio.h>

using namespace std;

float fatorial(float);

int main(){
  float n;
  cin>>n;
  cout << fatorial(n) ;
  return 0;
}

float fatorial (float n){
  float soma =1;
  for(int i=2;i<=n;i++)
    soma*=i;
  return 1/soma;
}
