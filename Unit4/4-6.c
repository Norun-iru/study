#include <stdio.h>
int main(void){
  int x;
  printf("整数を入力してください:");
  scanf("%d", &x);
  if(x >= 0 && x < 20 && (x%2) == 0){
    printf("Hello");
  }
}
