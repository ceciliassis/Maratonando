#include <bits/stdc++.h>

using namespace std;

string n;
char d;

void removeChar(){
    n.erase(remove(n.begin(),n.end(), d), n.end());
    //removendo cada caracter que bate da string
    cout <<atol(n.c_str()) << endl;   //string para long
}

int main(){
    while(cin >> d >> n){
        int zero = (int)d - '0'; 
        //char to int '0' de onde a tabela ASCII começa
       if(!zero && n.compare("0"))
           break;
        else
            removeChar();
            
    }
}