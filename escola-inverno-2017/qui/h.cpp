int main(){
  int n;
  scanf("%d", &n);
  while(n--){
    pair<long long,long long> left, right, mid;
    left = make_pair(0, 1);
    right = make_pair(1, 0);
    mid = make_pair(1,1);
    string str;
    cin >> str;
    for(int i=0; i < str.size(); i++){
      if(str[i] == 'L'){
        right = mid;
        mid.first += left.first;
        mid.second += left.second;
      }else{
        left = mid;
        mid.first += right.first;
        mid.second += right.second;
      }
    }
    printf("%lld/%lld\n",mid.first, mid.second);
  }
}