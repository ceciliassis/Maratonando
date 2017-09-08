//pilha -trilhos no URI
//FILO - LIFO
//
// estacao é uma pilha
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(scanf("%d", &n) && n){
    int x;
    while(scanf("%d", &x) && x){
      queue<int> q;
      stack<int> s;
      q.push(x);

      for(int i=1; i < n; i++){
        scanf("%d", &x);
        q.push(x);
      }

      x = 1; // vagao que esta entrando
      while(!q.empty()){
        if(x == n + 2) break; // todos os vagoes ja entraram
        while(!s.empty() && q.front() == s.top()){
          q.pop();
          s.pop();
        }

        if(q.empty()) break;

        if(s.empty() || q.front() != s.top()){ // novo vagao pode entrar
          s.push(x);
          x++;
        }
      }
      printf("%s\n", q.empty() ? "Yes" : "No");
    }
    printf("\n");
  }

  return 0;
}