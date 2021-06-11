#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int var(int k){
  if(k == 0){
    printf("グー\n");
  }
  else if(k == 1){
    printf("チョキ\n");
  }
  else if(k == 2){
    printf("パー\n");
  }
}

int main(void){

    printf("＜じゃんけんゲーム＞\n");
    printf("何を出しますか？\n");
    printf("0:グー　1:チョキ　2:パー\n");
    int a;
    scanf("%d", &a); //整数の入力

    printf("あなた：");
    var(a);

    int i;
    srand(time(NULL));
    i = rand() % 3;
    printf("あいて：");
    var(i);

    if(a == i){
      printf("あいこです。");
    }
    else if(a == 0 && i ==1 || a == 1 && i == 2 || a == 2 && i == 0){
      printf("あなたの勝ちです。");
    }
    else if(a == 0 && i == 2 || a == 1 && i == 0 || a == 2 && i == 1){
      printf("あなたの負けです。");
    }
    return 0;
}
