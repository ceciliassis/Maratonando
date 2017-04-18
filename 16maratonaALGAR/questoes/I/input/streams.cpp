#include <bits/stdc++.h>
using namespace std;



int hash(int x){
	return ((3*x)+1)%7;
}

int main(){
	string linha;
	int x; 
	char virgula;
	vector<int> nums; //vetor de inteiro
	stringstream xx;
	bitset<8> bitmap;
	bitset<8> num; //vai receber o hashed

	while(cin >> linha){
		xx << linha;
		while(xx >> x){ //come o proximo int
			nums.push_back(x);
			xx >> virgula; //come o proximo char (virgulas)
		}
		for (int i = 0; i < nums.size(); ++i){
			int j = hash(nums[i]);
			if(j){
			num = j;
				for (int z = num.size()-1; z > 0; ++z){
					if(num[z]){
						bitmap[z] = 1;
						break;
					}
				}
			}
		}
		cout << bitmap << endl;

		nums.clear(); //limpa vetor de inteiro
		xx.clear(); //limpa a stream e suas flags
		bitmap.reset(); //reseta bitmap
		num.reset();
	}
}
