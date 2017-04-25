#include <bits/stdc++.h>

using namespace std;

const int N = 45;
#define int long long
int pd[N];

int fib(int n){
	if(n <= 2) return 1;
	if(pd[n] != -1) return pd[n];
	return pd[n] = fib(n-2) + fib(n-1);
}

int32_t main(){	
	memset(pd,-1,sizeof pd);	
	fib(40);
	int a,b;
	pd[0] = 1;
	pd[1] = 1;
	pd[2] = 1;
	while(cin >> a >> b){
		if(a==-1&& b==-1)
			return 0;

		int res = 0;
		for(int i = a; i <= b; i++) res += pd[i];
		cout << res << endl;
	}
	
	return 0;
}