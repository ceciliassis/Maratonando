#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int harsals(int, vector<int>, int);

int main(){
	vector<int> H;
	int T, N, P, h;
	while(cin >> T){ //T casos de teste | N numero de dias | P qtd partidos | h passo
		while(T--){
			cin >> N >> P;
			for(int i=1; i<=P;i++){
				cin >> h;
				H.push_back(h);				
			}
			cout << harsals(N,H,P)<< endl;
			H.clear();
		}
	} 
	return 0;
}

int harsals(int N, vector<int> H, int p){
	bitset<3651> calendar;
	calendar.reset();
	for(int i=1 ; i<=p; i++){
		int h = H[i-1];
		for (int j=h; j<=N; j+=h)	{
			calendar.set(j, true); //muda o bit da posição atual	
		}
	}
	for(int i=6;i<=N;i+=7)
		calendar.reset(i);
	for(int i=7;i<=N;i+=7)
		calendar.reset(i);
	
	return calendar.count();

}

