#include <stdio.h>
int main(void){
  int i;
  int s = 1;
  for(i = 0; i < 24; i++){
    s = s * 2 ;
  }
  printf("%d",s);
  return 0;
}
