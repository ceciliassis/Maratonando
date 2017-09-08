#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;
	int pos = 5;
		scanf("%d", &num);
	do{
		int g = num++;
		if(g%2){
			printf("%d\n", g);
			pos--;
		}
	}while(pos>-1);
}