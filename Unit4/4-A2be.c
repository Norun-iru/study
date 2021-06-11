#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  printf("＜じゃんけんゲーム＞\n");
  printf("何を出しますか？\n");
  printf("0:グー　1:チョキ　2:パー\n");
  int a;
  scanf("%d", &a); //整数の入力

  //自分が出したものを表示
  printf("あなた:");
  if(a == 0){
    printf("グー\n");
  }
  else if(a == 1){
    printf("チョキ\n");
  }
  else if(a == 2){
    printf("パー\n");
  }

  //乱数作成
  int i;
  srand(time(NULL));
  i = rand() % 3;

  //あいてが出したものの表示
  printf("あいて：");
  if(i == 0){
    printf("グー\n");
  }
  else if(i == 1){
    printf("チョキ\n");
  }
  else if(i == 2){
    printf("パー\n");
  }

  //じゃんけんの結果
  if(a == i){
    printf("あいこです。");
  }
  else if(a == 0 && i ==1){
    printf("あなたの勝ちです。");
  }
  else if(a == 0 && i == 2){
    printf("あなたの負けです。");
  }
  else if(a == 1 && i == 0){
    printf("あなたの負けです。");
  }
  else if(a == 1 && i == 2){
    printf("あなたの勝ちです。");
  }
  else if(a == 2 && i == 0){
    printf("あなたの勝ちです。");
  }
  else if(a == 2 && i == 1){
    printf("あなたの負けです。");
  }
return 0;
}
