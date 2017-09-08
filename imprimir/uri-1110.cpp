#include <bits/stdc++.h>
using namespace std;

queue<int> cartas;

int ff(){
  int k = cartas.front();
  cartas.pop();
  return k;
}

int main(){
  int c;

  while(scanf("%d", &c)==1){
    if(c==0)
      break;

    for(int i=1; i<=c; i++){
      cartas.push(i);
    }

     printf("Discarded cards: ");
    
    int f;
    while(cartas.size() > 2){
      f = cartas.front();
      printf("%d, ", f);
      cartas.pop();
      cartas.push(ff());
    }
   
    printf("%d\n", ff()); 

    printf("Remaining card: %d\n", ff());   
    queue<int>().swap(cartas);
  }

  return 0;
}