#include <stdio.h>
int main(void){
    int i;
    int s = 0;
    printf("正の整数を入力してください。");
    scanf("%d", &i);
    int j = i;
    while(i > 0){
        s = s + i;
        i--;
    }
    printf("1 から %d までを足した足した値は %dです。",j , s);
    return 0;
}