#include <bits/stdc++.h>
using namespace std;

int main(){
  int cases;
  scanf("%d", &cases);
  for(int i=0; i<cases;i++){
    int n1, d1,n2,d2;
    int v1,v2;
    char op;
    scanf("%d / %d %c %d / %d",&n1,&d1,&op,&n2,&d2);

    switch(op){
      case '+':
        v1 = n1*d2+n2*d1;
        v2 = d1*d2;
      break;
      case '-':
        v1 = n1*d2-n2*d1;
        v2 = d1*d2;
      break;
      case '/':
        v1 = n1*d2;
        v2 = n2*d1;
      break;
      case '*':
        v1 = n1*n2;
        v2 = d1*d2; 
      break;
    }
    
    printf("%d/%d = ",v1,v2);
  
    /*
    Dados dois ou mais números, se um deles é divisor de todos os outros, então ele é o MDC dos números dados
    */

    int num=-1;
    int maior=-1;
    if(v1>v2)
      maior=v1;
    else maior = v2;
    
    for(int i=1;i<=maior;i++){
      if(v1%i==0 && v2%i==0)
          num = i;
    }
    
    if(num!=-1){
      v1 /= num;
      v2 /= num;
    }
    printf("%d/%d\n",v1,v2);
  }
  
}
