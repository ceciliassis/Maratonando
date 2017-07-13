#include <iostream>
#include <vector>
#include <limits>  

using namespace std;

constexpr int INFINITY = numeric_limits<int>::max(); //maior numero entre os ints

vector<int> mergin(vector<int> &, vector<int> &);

int main(){
    int n,m;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    
    while(cin>>n, cin>>m){
        a.push_back(n);
        b.push_back(m);
    }
    
    c = mergin(a,b);
    
    for(auto i : c){
        if(i!=INFINITY)
             cout << i <<' ';
    }
       
    cout << endl;
       
    
    return 0;
}

vector<int>  mergin(vector<int> &a , vector<int> &b){
    int tamA = a.size();
    int tamB = b.size();
    int i=0,j=0;
    vector<int> c(tamA+tamB); //auto construtor
    a.push_back(INFINITY);
    b.push_back(INFINITY);
    while( (i+j)<(tamA+tamB) ){
        if(a[i]<b[j]){
            c[i+j]=a[i];
            i++;
        }else{
            c[i+j]=b[j];
            j++;
        }
    }
    return c;
    
}

