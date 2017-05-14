/*Devido a problema de instabilidade dos critais, só se pode
 escolher cristais cujas energias estão presentes
numa subsequência contı́nua da sequência de Fibonacci. A energia 
resultante do sabre de luz construı́do
é o somatório das energias de cada cristal presente em sua 
estrutura. Dado o intervalo da sequência
correspondente aos cristais utilizados, calcule a força deste 
sabre de luz.*/

#include <bits/stdc++.h>
using namespace std;

#define lli long long int

lli f[45];

lli fibo(int n){
	if(n<=2) return 1;
	if(f[n]!=-1) return f[n];
	return f[n] = fibo(n-1)+fibo(n-2);
}


int main(){

	memset(f,-1, sizeof f);
	int a , b;
	for (int i = 0; i < 45; ++i)	{
		f[i] = fibo(i);
	}
	while(cin >>  a  >> b){
    if(a==-1 && b==-1)
      break;
		lli soma = 0;
		for (int i = a; i <= b; ++i)
		{
			soma += f[i];
		}
		cout << soma << endl;
	}

}