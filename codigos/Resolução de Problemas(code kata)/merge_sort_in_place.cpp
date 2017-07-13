#include <iostream>
#include <vector>
#include <limits>  

using namespace std;

constexpr int INFINITY = numeric_limits<int>::max(); //maior numero entre os ints

void mergin(vector<int> &a , int begin,int middle, int end);
void mergin_sort(vector<int> &a, int begin, int end);

int main(){
    int n;
    vector<int> a;


    while(cin>>n){
        a.push_back(n);
    }
    
    mergin_sort(a,0,a.size());
    for(auto i : a){
        if(i!=INFINITY)
             cout << i <<' ';
    }
       
    cout << endl;
       
    return 0;
}

void mergin(vector<int> &a , int begin,int middle, int end){
    vector<int> b(a.begin(), a.begin()+middle);
    vector<int> c(a.begin()+middle,a.end());
   
    
    int tamB = b.size();
    int tamC = c.size();
    int i=0,j=0;
   
    c.push_back(INFINITY);
    b.push_back(INFINITY);
   
    while( (i+j)<(tamB+tamC) ){
        if(b[i]<c[j]){
            a[i+j+begin]=b[i];
            i++;
        }else{
            a[i+j+begin]=c[j];
            j++;
        }
    }
   
    return;
    
}
void mergin_sort(vector<int> &a, int begin, int end){
    if(begin>end) return;
    int middle = (begin+end)/2;
    mergin_sort(a,begin,middle);
    mergin_sort(a,middle+1,end);
    mergin(a,begin,middle,end);
}



