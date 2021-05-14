#include <stdio.h>
int main(void){
  printf("三つの整数を入力してください。\n");
  int a,b,c;
  printf("整数A：");
  scanf("%d", &a);
  printf("整数B：");
  scanf("%d", &b);
  printf("整数C：");
  scanf("%d", &c);
  if(a <= b && a <= c){
    printf("最小値は %d です。", a);
  }else if(b <= a && b <= c){
    printf("最小値は %d です。", b);
  }else if(c <= a && c <= b){
    printf("最小値は %d です。", c);
  }
  return 0;
}
