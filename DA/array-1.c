#include <stdio.h>

int main(void){
    int n = 0;
    int d;
    printf("読み込みたいデータ数:");
    scanf("%d",&n);
    int sum = 0;
    for(int i = 0; i < n; i++ ){
        printf("%d人目のデータ:",i + 1);
        scanf("%d",&d);
        sum = sum + d;
        printf("\n");
    }
    printf("平均値:%.2f", sum * 1.0 / n);

    return 0;
}