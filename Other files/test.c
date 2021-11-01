#include <stdio.h>
int main(void){
  int x =15, y = 0;
  x += 3; printf("%d",x);
  x %= 5; printf("%d",x);
  y = --x; printf("%d",y);
  y = x+1; printf("%d",y);
  printf("%d",x);
  return 0;
}
