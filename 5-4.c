#include <stdio.h>
int main(void){
  int a;
  printf("西暦を入力してください。\n");
  printf("西暦：");
  scanf("%d", &a);
  if(a % 4 == 0 && a % 100 == 0 && a % 400 == 0){
    printf("閏年です。");
  }else if(a % 4 == 0 && a % 100 == 0){
    printf("閏年ではありません。");
  }else if(a % 4 == 0){
    printf("閏年です。");
  }else if(a >= 0){
    printf("閏年ではありません。");
  }else{
    printf("整数を入力してください。");
  }
  return 0;
}
