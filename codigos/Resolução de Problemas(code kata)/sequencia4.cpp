#include <iostream>
using namespace std;


void fibonacci();
int main(){
  fibonacci();
}

void fibonacci(){
  int i=1,fat=100;
  double fat1=1,fat2=1; 
  //0!+1!

  while(fat--){
    double f = fat1 + fat2;
    fat1=fat2;
    fat2*=++i;
    cout << f << endl;
  }    
}
