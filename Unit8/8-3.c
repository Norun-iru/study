#include <stdio.h>
int main(void){
  int i;
  int s = 0;
  scanf("%d", &i);
  for(i = i; i > 0; i--){
    s = s + i;
  }
    printf("%d", s);
  return 0;
}
