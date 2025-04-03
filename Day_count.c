#include<stdio.h>

// グローバル変数定義
int year, mmdd, m, d, i, ans;

int uru(int year){
  int ans = 0;
  if(year % 4 == 0){
    ans = 1;
  }
  if(year % 100 == 0 && year % 100 != 0){
    ans = 0;
  }
  return ans;
}
int main(void){
  int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

  printf("1月1日を第1日目として、日数を計算します。\n");
  printf("西暦の年数を入力してください: ");
  scanf("%d", &year);

  if(uru(year) == 1){
    printf("うるう年として数えます。\n");
    days[2] = 29;
  } else{
    printf("うるう年でないとして数えます。\n");
    days[2] = 28;
}
do{
  printf("9月1日=0901のように、月日を4けたで入力してください:");
  scanf("%d", %mmdd);
  m = mmdd / 100;
  d = mmdd % 100;
} while(m < 1 || 12 < m || d < 1 || days[m] < d); //異常があれば再入力
ans = 0;
  for(i = 0;i < m;i++){
    ans = ans + d[i];
  }
  ans = ans + d;

  printf("%d月%d日は、1月1日を第1日目として、%d日目です。\n", m, d, ans);
  return 0;
}
