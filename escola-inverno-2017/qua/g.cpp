int main(){
  int n;
  while(scanf("%d", &n) && n){
    queue<char> in, out;
    stack<char> pilha;
    char c;
    for(int i=0; i < n; i++){
      scanf(" %c", &c); //ignora qualquer tipo de espaço em branco!
      in.push(c);
    }

    for(int i=0; i < n; i++){
      scanf(" %c", &c);
      out.push(c);
    }

    while(!in.empty()){
      pilha.push(in.front());
      printf("I");
      in.pop();

      while(!pilha.empty()){
        if(pilha.top()==out.front()){
          printf("R");
          pilha.pop();
          out.pop();
        }
        else break;
      }
    }
    printf("%s", out.empty()? "\n" : " Impossible \n" );   

  }
}