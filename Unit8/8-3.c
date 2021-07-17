#include <stdio.h>
int main(void){
  int i;
  int s = 0;
  printf("正の整数を入力してください：");
  scanf("%d", &i);
  int j = i;
  for(i = i; i > 0; i--){
    s = s + i;
  }
  printf("1 から %d までをを足した値は %d です。", j,s);
  return 0;
}
