//para saber se um numero é primo .. voce pode olhar até
//a raiz dele

int main(){
  int numero = 15;
  int cont = 0;
  for(int i = 0; i <= sqrt(numero); i++){
    if(numero%i==0)
      cont++;
    if(cont>1)
      break;
  }

  if(cont>1){
    printf("nao primo\n");
  else printf("primo\n");
  }
}