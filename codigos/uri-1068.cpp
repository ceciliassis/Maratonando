#include <bits/stdc++.h>
using namespace std;

int main(){
  string ex;
  while(cin >> ex){
    int par = 0;
    for(int i=0; i < ex.size(); i++){
      if(ex[0] == ')'){
        par = -1;
        break;
      }

      if(ex[i] == '(')
        par++;
      else if(ex[i] == ')')
        par--;

      if(par < 0)
        break;
    }

    if(par == 0) 
      printf("correct\n");
    else printf("incorrect\n");
  }
}