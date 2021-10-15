#include <stdio.h>
int main(void){
  int i;
  printf("何段ですか？：");
  scanf("%d", i);
  for(i = i; i > 0; i--){
    printf("*");
    printf("\n");
  }
  return 0;
}
