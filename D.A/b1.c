#include <stdio.h>
int main(void){
    int a[100];
    int b = 0, i, x;

    printf("10進数を入力:");
    scanf("%d", &x);

    while(x > 0){
        a[b] = x % 2;
        x = x / 2;
        b++;
    }

    printf("2進数: ");
    for(i = b - 1; i >= 0; i--){
        printf("%d",a[i]);
    }
    printf("\n");

    return 0;
}