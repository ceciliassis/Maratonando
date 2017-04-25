#include <bits/stdc++.h>
using namespace std;



std::vector<pair<int, int>> v;
int main(){
	int N, caso = 0;

	while(cin >> N, N){
		for(int i=0; i <= N, i++){
			int a,b;
			cin >> a >> b;
			v.push_back(make_pair(a, b));
		}

		printf("Caso #%d: %d\n", ++caso, 0);
	}
}