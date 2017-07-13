/*Crie um algoritmo que aceita como entrada os valores de n, r, e uma amostra, e retorne:
 
a. a próxima permutação
b. a permutação anterior
*/

#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

void frente_tras(int, vector<int> &, string &);

int main(){
  
  int n , r; 
  cin >> n >> r ;
  cin.ignore ( numeric_limits<streamsize>::max(), '\n' ); //string gigante
  
  string arranjo; 
  getline(cin, arranjo);
  
  vector <int> a(r,1);
  
  frente_tras(n,a, arranjo);
  
  return 0;
}

void frente_tras(int n, vector<int> &a, string &arranjo){
  arranjo += ' ';
  bool prox=false, anter=false;
  string anterior, atual; 
  for(int i= a.size()-1;i>=0;i--){ 
    
    if(prox)
      break;
    if(atual == arranjo){
     anter=true; 
     prox =true;
    }
      
    if(!anter)
      anterior = atual;
    
    atual.clear();
    for(auto j : a){
     atual += to_string(j);
     atual += ' ';
    }
    
    if(a[i]<n){    
      a[i]++;
      for(i=i+1;i<a.size();i++)
        a[i]=1;  
    }
       
  }
    
  if(atual==arranjo)
    atual = ' ';
  cout << "proxima: "<< atual << endl;  
  cout << "anterior: " + anterior << endl;
}
