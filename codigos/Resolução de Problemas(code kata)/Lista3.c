/*
Crie um algoritmo que lê n números e calcula a média geométrica, utilizando força bruta para o cálculo da raiz.
Repita o exercício utilizando a técnica vista em aula para o cálculo da raiz.
 */

media(vSize,m)
  
  n=1;
  inc=1;
  a = m-0.0001;  
  
  valor = laco(n);
  
  while((valor < a) || (valor>m)){
    valor2 = valor;
    while(valor2<=m){
      n=n+inc;
      valor2 = laco(n);
    }
    n=n-inc;
    inc /= 10;
    valor = laco(n);
  }
  
  return n;


laco(vSize, n)
  if(n==1)
    return n;
  para i=1 ate i<=vSize
    n*=n;
  return n;
  
  ----------------------------------
  
  Busca Binária
sqrt(vSize,m)
  n=m;
  while(|laco(n)-m|<10^-6)
    n=(n+m/n)/2;
  return n;
    
laco(vSize, n)
  if(n==1)
    return n;
  para i=1 ate i<=vSize
    n*=n;
  return n;
  

/*2. Crie um algoritmo que encontre um inteiro cujo quadrado é o mais próximo possível, mas maior, que o inteiro lido como entrad*/
sqrt(m)
  float n=m;
  while(|(n*n)-m|<10^-6)
    n=(n+m/n)/2;
  int z = n;
  return z+1;


  
