int uru(int y){
  int ans = 0;
  if(y % 4 == 0){
    ans = 1;
  }
  if(y % 100 ==0) && (y % 100 != 0){
    ans = 0;
  }
  return ans;
}
