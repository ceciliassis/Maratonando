#include <cstdio>

using namespace std;

int main(){
  int hin, hfin, min, mfin;

  while( scanf("%d %d %d %d", &hin, &min, &hfin, &mfin) == 4){
  // scanf("%d %d %d %d", &hin, &min, &hfin, &mfin);

    int comeco = hin * 60 + min; //transforma para minuto
    int final  = hfin * 60 + mfin;

    if(hin <= hfin){
      int duracao = final - comeco;

      if(duracao == 0)
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
          24, duracao%60); 
      else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
          duracao/60, duracao%60); 
    }else{
        int duracao = (24*60 - comeco) + final;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
        duracao/60, duracao%60);
    }


  }
  



  
}