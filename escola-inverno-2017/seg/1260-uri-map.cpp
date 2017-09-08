#include <bits/stdc++.h>
using namespace std;

int main(){ // map, chaves unicas (ordenado)
  int n;
  bool flag = false;
  scanf("%d", &n);
  getchar(); // limpa o buffer
  getchar(); // tira a primeira linha em branco (separa os casos)
  
  while(n--){ // primeiro roda o loop, depois decrementa
    if(flag) printf("\n");
    flag = true;

    map<string, int> ars;
    string arv;
    int count = 0;
    while(getline(cin, arv) && !arv.empty()){ //leitura ate encontrar uma linha. leitura de onde? entrada padrao (cin), e salva na string . getline lê somente até o enter e o tira do buffer
      ars[arv]++; //todo elemento é inicializado com zero no map, já cria e ja conta
      count++; // conta a quantidade de arvores
    }
    map<string, int>::iterator it;
    for(it = ars.begin(); it != ars.end(); it++){ //percorre de forma ordenada
      printf("%s %.4lf\n", it->first.c_str(), 100.0*it->second/count);// === (*it).first (*it).second
    }
  }

  return 0;
}