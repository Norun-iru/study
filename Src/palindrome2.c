#include <stdio.h>
#include <string.h>


int main(void){
  printf("文字を入力してください。\n");
  char a[5000];
  char b[5000];
  scanf("%s", a);
  strcpy(b , a);
  int i;
  unsigned len = 0;
  while (b[len]){
      len++;
  }
  for(i = 0; i< len / 2; i++){
      char temp = b[i];
      b[i] = b[len-i-1];
      b[len-i-1] = temp;
  }
  strcat(a,b);
  printf("回文:%s",a);
  return 0;

}