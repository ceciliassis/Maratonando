#include <bits/stdc++.h>
using namespace std;

void primeira(string &texto){
  for(int i=0;i<texto.size();i++){
    if(isalpha(texto[i])){ //is alphabetic(letra)
      texto[i] += 3;
    }
  }
}

void segunda(string &texto){
  reverse(texto.begin(), texto.end());
}

void terceira(string &texto){
  for(int i=texto.size()/2;i<texto.size();i++){
    texto[i]--;
  }
}

int main(){
  int t;
  scanf("%d", &t);
  cin.ignore();
  while(t--){
    string texto;
    getline(cin,texto);
    primeira(texto);
    segunda(texto);
    terceira(texto);    
    cout << texto << endl;
  }
}