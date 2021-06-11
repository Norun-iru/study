#include <stdio.h>
int main(void) {
  int a = 50;
  printf("%d\n", a == 50 );
  printf("%d\n", a >= 70 );
  printf("%d\n", a >= 20 || a < 40 );
  printf("%d\n", a >= 20 && a < 40 );
  printf("%d\n", (a/2) == 25 );
  printf("%d\n", (a*2) != 100 );
  return 0;
}
