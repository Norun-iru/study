#include <stdio.h>
int main(void){
  int n;
  printf("降水確率は？");
  scanf("%d", &n);
  if (n < 20){
    printf("きっと晴れます。");
  }
  else if(n >= 80){
    printf("きっと雨になります。");
  }
  else{
    printf("よくわかりません。");
  }
  return 0;
}
