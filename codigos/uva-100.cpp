#include <iostream>
using namespace std;

int threeNPlusOne(int i, int j);

int main(){
	int i, j;
	while(cin >> i >> j) { //"entrando no i"
		int max = threeNPlusOne(i,j);
		cout << i <<" "<< j << " "<< max << endl;
	}
	return 0;
}

int threeNPlusOne(int i, int j){
	if (i > j ){
		int temp = i;
		i = j;
		j = temp;	
	}
  	int max = 1;
	for( int go = i; go <= j ; go++ ){
		int ciclo = 1;
		int x = go;
		while( x>1 ){
			if( ( x%2 ) == 0 )	x = x/2;
			else 	x = 3*x + 1;
			ciclo++;
		}
	
		if( max<ciclo) max = ciclo;		
	}
	return max;

}
