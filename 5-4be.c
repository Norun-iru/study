#include <stdio.h>
int main(void){
  int year;
  printf("西暦を入力してください。\n");
  printf("西暦：");
  scanf("%d", &year);
  if(year % 4 == 0 && year % 100 != 0 && year % 400 != 0){
    printf("閏年です。");
  }else if(year % 4 == 0 && year % 100 == 0 && year % 400 != 0){
    printf("閏年ではありません。");
  }else if(year % 4 == 0 && year % 100 == 0 && year % 400 == 0){
    printf("閏年です。");
  }
  else{
    printf("閏年ではありません。");
  }
  return 0;
}
