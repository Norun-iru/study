#include <stdio.h>
int main(void){
  int x;
  scanf("%d", &x);
  switch (x){
    case 0: printf("ZERO");break;
    case 1: printf("ONE");break;
    case 2: printf("TWO");break;
    case 3: printf("THREE");break;
    default: printf("other number");break;
  }
  printf("\n");
  return 0;
}
