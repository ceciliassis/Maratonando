#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, g;
  scanf("%d", &n);
  long sum = 0;

  for(int i=0; i < n; i++){
    scanf("%d", &g);
    sum+=g;
  }

  int o = 1;
  while(o*n <= sum){
    o++;
  }  

  printf("%d\n", o);
  return 0;
}