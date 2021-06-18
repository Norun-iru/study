#include <stdio.h>
int main(void){
    printf("テストの点数を入力してください。\n終了時には -1 を入力\n");
    int n = 0, m = 0, s = 0, i = 1, l = 100;

    while(1){
        printf("%d人目:", i);
        scanf("%d", &n);
        if(n == -1 || n < -1 || n > 100){
            break;
        }
        s = s + n;
        i++;
        if( n < l ){
            l = n;
        }
        if( n > m){
            m = n;
        }
    }
    printf("最低点: %d ", l);
    printf("最高点: %d ", m);
    printf("受験者数: %d ", i - 1);
    printf("平均点: %.1f\n", s / (i - 1.0));
    return 0;
}