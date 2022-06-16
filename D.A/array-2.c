#include <stdio.h>
#include <math.h>

int main(void){
    int n = 0;
    int d[256];
    printf("読み込みたいデータ数:");
    scanf("%d",&n);
    int sum = 0;
    for(int i = 0; i < n; i++ ){
        printf("%d人目のデータ:",i + 1);
        scanf("%d",&d[i]);
        sum = sum + d[i];
        printf("\n");
    }
    float avg = sum * 1.0 / n;
    float sa = 0;
    for(int i = 0; i < n; i++){
        sa = sa + pow( d[i] - avg, 2);
    }

    
    printf("平均値:%.2f\n", avg);
    printf("標準偏差:%.2f\n", sqrt(sa / n));

    return 0;
}