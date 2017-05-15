#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  scanf("%d %d", &a, &b);

  a = a < 0 ? -a : a;
  b = b < 0 ? -b : b;

  int count = 1;
  bool maior = false;
  int aa = min(a,b);

  if(a==b){
    count++;
  }else{
    if(a > pow(10,5) || b > pow(10,5) ) {
      aa /= 2;
      maior = true;
    }

    for(int i = 2; i <= aa; i++){
      if((a % i == 0) && (b % i == 0)){
        count++;
      }
    }
    
    if(maior && (b % a == 0))
        count++;
  }

  printf("%d\n",count);

  return 0;
}
