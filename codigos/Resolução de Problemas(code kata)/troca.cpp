#include<bits/stdc++.h>

using namespace std;

void troca(int &, int &);

int main(){
	int a , b;
	while(cin>>a>>b){
		troca(a,b);
		printf("%d %d\n", a,b);
			
	}
	return 0;

}

void troca(int &a, int &b){
	int c = b;
	b = a;
	a = c;
}
