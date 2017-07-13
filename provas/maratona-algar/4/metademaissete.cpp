#include <bits/stdc++.h>
using namespace std;

int limite(int idade){
  return floor((idade/2)+7);
}

int main(){
  int id1, id2;
  scanf("%d %d", &id1, &id2);
  while(true){
    if(limite(id1)<=id2){
      printf("0\n");
      break;
    }else{
      
    }
  }
  
  return 0;
}