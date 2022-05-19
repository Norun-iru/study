#include <stdio.h>
#include <limits.h>

int main(void){
    int b, t, i;
    char bt[100];

    printf("整数を入力してください.\n");
    scanf("%d", &t);

    b = sizeof(t) * CHAR_BIT;

    for(i = 0; i < b; i++){
        if(t & 0x01){
            bt[i] = '1';
        }else{
            bt[i] = '0';
        }
        t = t >> 1;
    }

    for(i = b - 1; i>= 0; i--){
        putchar(bt[i]);
    }
    printf("\n");
    return 0;
}