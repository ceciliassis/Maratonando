#include <bits/stdc++.h>
using namespace std;

int calls;

int fibo(int n){
  calls++;
  if(n<=1) return n;
  return fibo(n-1) + fibo(n-2);
}

int main(){
  int cases, n;
  scanf("%d", &cases);

  for(int i=0; i<cases; i++){
    calls=-1; //tirando a primeira chamada
    scanf("%d", &n);
    printf("fib (%d) = %d calls = %d\n", n, calls, fibo(n) );
  }
}
