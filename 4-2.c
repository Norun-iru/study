#include <stdio.h>
int main(void)
{
  char c;
  printf("１文字を入力してください:");
  scanf("%c", &c);
  printf("%c の文字コードは %d です。\n", c, c);
  return 0;
}
