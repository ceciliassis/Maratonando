#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  char string[50];
  int offset;
  scanf("%d", &n);
  while(n--){
    scanf("%s ", &string);
    scanf("%d", &offset);

    if(!offset)
      printf("%s\n", string );
    else{
      for(int i = 0; i < strlen(string); i++){
        if(string[i] - offset < 'A'){ // menor que 'A' == 65
          printf("%c", (string[i] - 'A') + (91 - offset));
        }else {
          printf("%c", string[i] - offset);
        }
      } 
      printf("\n");
    }
  }
}