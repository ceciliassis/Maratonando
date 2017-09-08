string a, b;

bool simula(int k){
  string aux;
  for(int i = 0; i < b.size(); i++){
    for(int j = 0; j < k; j++){
      aux.push_back(b[i]);
    }
  }
  int cont = 0;
  for(int i = 0; i < a.size() i++){
    if(a[i] == aux[cont]){
      cont++;
    }
  }

  return cont == aux.size();
}

int main(){
  while(n--){
    cin >> a >> b;
    int lo = 0, hi = a.size() / b.size();
    int res = 0;
    while(lo <= hi){
      int mid = (lo+hi)/2;
      if(simula(mid)){
        lo = mid + 1;
        res = mid; 
      }else{
        hi = mid - 1;
      }
    }

    printf("%d\n", res);

  }
}