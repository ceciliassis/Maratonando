#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f //infinito
#define LINF 0x3f3f3f3f3f3f3f3fLL
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int c[100010];
int tree[4*100000+1];

void build(int no, int left, int right){
  int esq = no * 2, dir = no * 2 + 1;
  int mid = (left+right)/2;
  if(left==right){
    tree[no] = c[right];
    return;
  }

  build(esq, left, mid);
  build(dir, mid + 1, right);

  tree[no] = tree[esq] + tree[dir];
}

int q(int no, int left, int right, int i , int j){
  if(right < i || left > j) return 0;
  if(left >= i && right <= j) return tree[no];
  int esq = no * 2, dir = no * 2 + 1;
  int mid = (left+right)/2;
  int somaEsq = q(esq, left, mid, i, j);
  int somaDir = q(dir, mid +1, right, i , j);
  return somaEsq + somaDir;
}

void up(int no, int left, int right, int pos, int val){
  if(pos > right || pos < left) return;
  if(left == right){
    tree[no] = val;
    return;
  }
  int esq = no * 2, dir = no * 2 + 1;
  int mid = (left+right)/2;

  up(esq, left, mid, pos, val);
  up(dir, mid + 1, right, pos, val);

  tree[no] = tree[esq] + tree[dir];
}

int main(){
 int n, p;
 scanf("%d", &n);
 for (int i = 1; i <= n; ++i) {
  scanf("%d", &c[i]);
 }
 scanf("%d", &p);
 build(1, 1, n);
 while(p--){
  int a,b;
  char c;
  scanf(" %c %d %d", &c, &a, &b);
  if(c=='U') up(1, 1, n, a, b);
  else printf("%d\n", q(1, 1, n, a, b));
 }
 return 0;

}