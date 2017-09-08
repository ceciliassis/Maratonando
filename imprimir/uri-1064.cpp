#include <bits/stdc++.h>
using namespace std;

int main(){
	float num;
	int pos = 0;
	float media = 0;
  for(int i=0; i <6; i++){
  	scanf("%f", &num);
  	if(num > 0){
  		pos++;
  		media+=num;
  	}
  }

  printf("%d valores positivos\n%.1f\n",pos, media/pos );
}