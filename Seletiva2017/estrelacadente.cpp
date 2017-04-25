/*
Uranilda é apaixonada por estrelas cadentes, de tanto
observá-las ela descobriu um padrão, elas passam
pelo céu apenas nos chamados ”dias mágicos”, um dia é 
considerado mágico se pode ser formado apenas
pela concatenação dos números 1, 14 e 144, podendo usar 
uma quantiade ilimitada de vezes qualquer um
desses números. Dado um dia qualquer, diga se uma estrela 
cadente passará pelo céu nesse dia ou não.
 */

#include <bits/stdc++.h> //inclui todas as bibliotecas
using namespace std;

int main(){
	string frase;
	while(cin >> frase){
		int tam = frase.size();
		bool flag = true;
		for (int i = 0; i < tam; i++){
			if(frase.compare("0") == 0)
				return 0;

			if(frase[0]!='1'){
				flag = false;
				break;
			}

			if(frase[i]=='1'){
				continue; //next
			}else if(frase[i]=='4'){
				if((i-1) < 0)
					break;

				if(frase[i-1]=='1'){ //14
					continue; //numero magico NEXT
				}else if(frase[i-1]=='4'){//_44
					if((i-2)<0)
						break;
					if(frase[i-2]=='1')//144
						continue; //numero magico NEXT
					else{//?44
						flag = false;
						break;
					}
				}
			}else{//!=1 && !=4
				flag = false;
				break;
			}
		} //for

			
		if(flag){
			printf("Vai ter estrela cadente sim!\n");			
		}else{
			printf("Nao tem nao!\n");	
		}
		
	} //while

	return 0;
}