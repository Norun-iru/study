#include <stdio.h>
int main(void){
  char c;
  char str[256];
  printf("1文字を入力:"); scanf("%c", &c);
  printf("%c が入力されました。\n", c);
  printf("文字列を入力:"); scanf("%s", str);
  printf("%s が入力されました。\n", str);
  return 0;
}
