#include <bits/stdc++.h>

using namespace std;

int soma_r(vector<int> &, int );

int main(){
	vector <int> c;
	int n ;
	while(cin >> n){
	   c.push_back(n);
	   
	}
	
	cout << soma_r(c, c.size()-1) << endl;
	return 0;
}

int soma_r(vector<int> &c, int n){
   if (n==0) return 0;
   return soma_r(c, n-1)+c[n];

}
