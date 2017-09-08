#include <bits/stdc++.h>
using namespace std;

int fatorial(int n){
  if(n <= 1)
    return 1;
  else return n * fatorial(n-1);
}

int main(){
  int c;
  scanf("%d", &c);
  printf("%d\n", fatorial(c));
}