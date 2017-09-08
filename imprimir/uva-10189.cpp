#include<iostream>
#include<vector>
using namespace std;

void minesweeper( int , int , vector<vector<int> > &);
void incrementa( int & );

int main(){
	int n,m;
	vector<vector<int> > mat;
	while(cin >> n >> m , n!=0 && m!=0 ){
		mat.resize(n+2); //linha
		for(int l=1; l<=n; l++){
			mat[l].resize(m+2, 0); //coluna
			for(int c=1 ; c<=m ; c++){
				char sig;
				cin >> sig;
				if( sig=='*' )
					mat[l][c] = -1;
				else mat[l][c] = 0;
			}
		}
		minesweeper(n,m,mat);
		for(int l=1;l<=n;l++){
            for (int c=1;c<=m;c++){
                int value = mat[l][c];
                cout << value;
            }
            cout << endl ;
		}

	}

	return 0;
}

void minesweeper( int n, int o, vector<vector<int> > &m ){
	for(int i=1; i<=n; i++){
		for(int j=1 ; j<=o ; j++){
			if( m[i][j] == -1 ){
             incrementa ( m[i][j+1] );
             incrementa ( m[i][j-1] );
             incrementa ( m[i+1][j+1] );
             incrementa ( m[i-1][j-1] );
             incrementa ( m[i+1][j] );
             incrementa ( m[i-1][j] );
             incrementa ( m[i+1][j-1] );
             incrementa ( m[i-1][j+1] )  ;
			}
		}
	}

}

void incrementa( int &value ){ //recebendo referencia para um inteiro
	if( value != -1 ) value++;
}

