#include <iostream>
#include <cmath>
using namespace std;

int simulaMult(int,int);

int main(){  
  int m, n;
  cin >> m >> n;
  while(cin >> m >> n)
    cout << simulaMult(m,n) << endl;
}

int simulaMult(int m, int n){
    
    int soma = 0;
    if(m==0||n==0)
      return soma;
      
    for (int i =1 ;i<=abs(m);i++)
        soma +=abs(n);
    
    if((m>0 && n<0) || (m<0 && n>0)) //+*-
      return soma*=-1; //-
    else // -*- or +*+
      return soma;     

}
