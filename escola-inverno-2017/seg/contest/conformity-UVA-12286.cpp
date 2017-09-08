#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(scanf("%d", &n) && n){
    map<set<int>,int> m;
    map<set<int>,int>::iterator it;
    int maiorFreq = 0, qntAlunos = 0;
    for(int i=0;i < n; i++){
      set<int> s; // grade
      for(int j=0; j < 5; j++){
        int x;
        scanf("%d", &x);
        s.insert(x);
      }
      m[s]++;  //aumenta a frequencia da frequencia
      if(m[s] > maiorFreq) maiorFreq = m[s]; // pega a maior frequencia
    }

    for(it = m.begin(); it != m.end(); it++){
      if(it->second == maiorFreq) // grades com maior frequencia igual
        qntAlunos++; // contando no caso de empate quantos alunos
    }

    printf("%d\n", maiorFreq*qntAlunos ); // maior frequencia * qntd alunos
  }
}