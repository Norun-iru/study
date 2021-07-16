#include <stdio.h>
int main(void){
    printf("テストの点数を入力してください。\n終了時には -1 を入力\n");
    int n = 0, m = 0, s = 0, i = 0, l = 100;
    int a[40];

    while(1){
        printf("%d番:", i + 1);
        scanf("%d", &a[i]);
        if(a[i] == -1 || a[i] < -1 || a[i] > 100){
            break;
        }
        s = s + a[i];
        if( a[i] < l ){
            l = a[i];
        }
        if( a[i] > m){
            m = a[i];
        }
        i++;
    }
    printf("最低点: %d ", l);
    printf("最高点: %d ", m);
    printf("受験者数: %d ", i);
    printf("平均点: %.1f\n\n", s / (i+0.0));

    while(1){
        printf("学生番号を入力してください\n終了時には-1を入力\n");
        int k;
        scanf("%d", &k);
        printf("%d番: %d点\n",k,a[k-1]);
        if(k == -1){
            break;
        }
    }
    return 0;
}