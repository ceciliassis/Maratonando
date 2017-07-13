#include <bits/stdc++.h>
using namespace std;

int main(){
	// contagem de bits
	long long int n;
	// int c=0;
	while(cin >> n, n){
		// ------------- uma forma
		for(int i=0;i <=32; i++){
			if(n&(1<<i)) //shifita e faz and 
				c++;
		}
		cout << c << endl;
		// 
		// ------------- outra forma
		cout << __builtin_popcount(n) << endl;
		// 
		// ------------- bitset -> tranforma numero em vetor
		bitset<40> vetor(n); //numero maximo de bits, numero que vai 
		//ser transformado
		cout << vetor.count() << endl ;
	}
}