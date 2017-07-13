#include <bits/stdc++.h>
using namespace std;

int main(){
  string l;
  int casos;
  scanf("%d", &casos);
  while(casos--){
    cin >> l;
    int di = 0;
    int abriu = 0, fechou = 0;

    for(int i=0; i < l.size(); i++){
      if(l[i]=='.'){
        continue;
      }else if(l[i]=='<'){
        abriu++;
      }else if(l[i]=='>'){
        if(abriu > 0){
          fechou++;
          di++;
          abriu--;
        }
      }
    
    }
    
    printf("%d\n", di);

  }
}