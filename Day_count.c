#include<stdio.h>

// グローバル変数定義
int year, mmdd, m, d, i, ans;

int uru(int year){
  int ans = 0;
  if(year % 4 == 0){
    ans = 1;
  }
  if(year % 100 == 0) && (year % 100 != 0){
    ans = 0;
  }
  return ans;
}
int main(void){
  int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

  printf("1月1日を第1日目として、日数を計算します。\n");
  printf("西暦の年数を入力してください: ");
  scanf("%d\n", &year);

  uru();
}
