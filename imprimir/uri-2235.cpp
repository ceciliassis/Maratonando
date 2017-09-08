#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c, presente = 2016;
  while(scanf("%d %d %d", &a,&b,&c)==3){
    if((presente+a-b)==presente)
      printf("S\n");
    else if((presente+a-c)==presente)
      printf("S\n");
    else if((presente+b-a)==presente)
      printf("S\n");
    else if((presente+b-c)==presente)
      printf("S\n");
    else if((presente+c-a)==presente)
      printf("S\n");
    else if((presente+c-b)==presente)
      printf("S\n");
    else if((presente+a+b-c)==presente)
      printf("S\n");
    else if((presente+a+c-b)==presente)
      printf("S\n");
    else if((presente+b+c-a)==presente)
      printf("S\n");
    else if((presente+b+a-c)==presente)
      printf("S\n");
    else if((presente+c+a-b)==presente)
      printf("S\n");
    else if((presente+c+b-a)==presente)
      printf("S\n");
    else
      printf("N\n");
  }

}