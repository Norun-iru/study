#include <stdio.h>
#include <string.h>
/*--- 文字列strの長さを返す ---*/
unsigned str_length(const char str[])
{
    unsigned len = 0;
    while (str[len])
        len++;
    return (len);
}

/*--- 文字列を逆順に並べ替える ---*/
void rev_string(char str[])
{
    int i;
    int len = str_length(str);
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}


int main(void){
  printf("文字を入力してください。\n");
  char a[5000];
  char b[5000];
  scanf("%s", a);
  strcpy(b , a);
  rev_string(b);    // 文字列を逆順に並べ替える
  strcat(a , b);
  printf("回文：%s", a);
  return 0;
}
