#include <bits/stdc++.h>
using namespace std;

struct point{
  int x;
  int y;
  float custo = numeric_limits<float>::infinity();
//  point *viz;
};

vector<point> points;
int n;

bool euclidian(int atual, int pos){
  float pow1;
  float pow2;
  float val;

  // for(int i=atual+1; i < points.size() && atual < points.size(); ++i){
    pow1 = (float) points[pos].x-points[atual].x;
    pow2 = (float) points[pos].y-points[atual].y;
    pow1*=pow1;
    pow2*=pow2;
    val = sqrt(pow1+pow2);

    if(val < points[atual].custo && val < points[pos].custo){
      points[atual].custo = points[pos].custo = val;
    //  points[atual].viz = &points[pos];
     // points[pos].viz = &points[atual];
      return true;
    }
  // }

  return false;
}


void backtrack(int atual, int pos){
  // if(pos == n*n)
    // return;
  for(int i=pos; i < n*n ; ++i){
    if(euclidian(atual, pos))
      backtrack(atual, i+1);
    else backtrack(atual+1,i+2);
  }    
}



int main(){
  point a;
  
  scanf("%d", &n);
  for(int i = 0; i <n*n ; ++i){
    scanf("%d,%d",&a.x,&a.y);  
    points.push_back(a);    
  }

  backtrack(0,1);
  
  float sum = 0;
  
  for(point p: points){
    printf("%f\n", p.custo );
    sum += p.custo;
  }
  
  printf("%.2f\n",sum);

  return 0;
}