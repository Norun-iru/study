#include <stdio.h>
int main(void){
    int i = 012;
    printf("%d %o %x \n", i, i, i);

    printf("１６進数を入力\n"); scanf("%x", &i);
    printf("%d\n", i);

    return 0;
}