// Example program
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    while(scanf("%d %d %d  %d", &a, &b, &c, &d) == 4 ,a,b,c,d){
       if(a==c && b==d) //mesmo lugar OK
            printf("0\n");
       else if((a!=c && b==d)||(a==c && b!=d)) //lado
            printf("1\n");
       else if(max(a,c)-min(a,c)==max(b,d)-min(b,d)) //diagonal
            printf("1\n");
       else printf("2\n"); //em L
    }
}
