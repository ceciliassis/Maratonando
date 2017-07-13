#include <bits/stdc++.h>
// PD -> dicas : numero muito grande NÀO FUNCIONA
// numero muito pequena PD cabulosa
using namespace std;

int preco[110], peso[110];
int m[110][1010]; //PD esta na memorizacao (DISP por ir de 0--1000)

int t; //ultimo item da lista

int best(int item, int disp){ //index do item e capacidade disponivel
	//CASO BASE SEMPRE PRIMEIRO
	if(item == t) return 0; //ja passou -> BORA PARAR
	if(m[item][disp] != -1) return m[item][disp]; //ESTADOS 

	int ans = best(item+1, disp); //nao quero o item atual
	if(disp >= peso[item]){ //se eu quiser o iten preciso ter capacidade
		ans = max(ans, best(item+1, disp - peso[item])+preco[item]);
		//verifica quem vai me dar mais lucro , diminuindo minha capacidade
		//pega o item atual e tenta pegar mais (os proximos)
	}
	return m[item][disp] = ans; //memorizando BUIA
}

int main(){
	int capacidadeMochila;
	
	while((scanf("%d", &t)), t){
		memset(m,-1, sizeof(m)); //setando geral como -1 NAO ROLA COM VECTOR

		for (int i = 0; i < t; ++i)	{
			scanf("%d %d", &preco[i], &peso[i]);
		}
		scanf("%d", &capacidadeMochila);

		printf("%d\n", best(0, capacidadeMochila)); //primeiro item e a capacidade da mochila
	}
	return 0;
}

