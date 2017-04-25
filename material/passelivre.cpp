#include <bits/stdc++.h> //todo as biblios

struct pessoa{
    int lugar;
    std::string nome;
};

int pessoas;
pessoa people[100010];

void ordena(pessoa p, int pp ){
    if(pp==pessoas-1) return;
    
    if(p.lugar>people[pp+1].lugar){
        pessoa temp = people[pp+1];
        people[pp+1] = p;
        people[pp] = temp;
    }
    ordena(people[pp+1],pp+1);
};

int main(){
    int filas;
    scanf("%d", &filas);
    
    while(filas--){

        scanf("%d", &pessoas);
        for(int i=0; i<pessoas;i++){
            std::cin >> people[i].nome >> people[i].lugar;
        }

        ordena(people[0], 0);
      
        for(int i=0; i<pessoas-1;i++){
          std::cout << people[i].nome << ' ';
        }
        std::cout << people[pessoas-1].nome << std::endl;
    }
}