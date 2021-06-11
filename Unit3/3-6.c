#include <stdio.h>
int main(void){
  float a, b, c;
  printf("三つの整数を入力してください。\n");
  printf("整数A:");
  scanf("%f", &a);
  printf("整数B:");
  scanf("%f", &b);
  printf("整数C:");
  scanf("%f", &c);
  printf("合計は %.0f で、平均は %.1f です。", a + b + c, (a + b + c) / 3);
  return 0;
}
