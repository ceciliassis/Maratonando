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
		lli soma = 0;
		for (int i = a; i <= b; ++i)
		{
			soma += f[i];
		}
		cout << soma << endl;
	}

}