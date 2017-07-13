#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;
	int pos = 0;
  for(int i=0; i <5; i++){
  	scanf("%d", &num);
  	if(!(num % 2))
  		pos++;
  	
  }

  printf("%d valores pares\n",pos);
}