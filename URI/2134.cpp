#include <bits/stdc++.h>
using namespace std;

int main(){
  int povo, t=1;
  while(cin >> povo){
    printf("Instancia %d\n", t);
    string nome;
    int prob;
    set<pair<int,string>> alunos; //ordena por chave e dps por valor 
    for(int i=0;i<povo;i++){
      cin >> nome >> prob;
      alunos.insert(make_pair(prob,nome));
    }
    
    int n = alunos.begin() -> first; //numero
    string reprovado;
    
    bool flag = true;
    for(auto &c : alunos){
      if(c.first==n){
        flag = false;
        reprovado = c.second;
      }else 
        break;
     }
    
    if(!flag)
      cout << reprovado;
    else
      cout << alunos.begin() -> second; //nome
    
    printf("\n\n");
      
    t++;
  }

}