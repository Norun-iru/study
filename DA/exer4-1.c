#include <stdio.h>
int main(void){
    int score[5];
    for(int i = 0; i < 5; i++){
        printf("%d人目:",i + 1);
        scanf("%d",&score[i]);
    }
    int sum = 0;
    for(int k = 0; k < 5; k++){
        sum = sum + score[k];
    }
    printf("合計点:%d\n", sum);

    int avg = 0;
    printf("平均点:%.1f\n", sum / 5.0);

    return 0;
}