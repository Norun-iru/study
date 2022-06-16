#include <stdio.h>

int func(int);
int a = 2;

int main(void){
    int b;

    printf("Input a\n");
    scanf("%d", &a);
    b = func(a);
    printf("m:a = %d, b = %d\n", a, b);
    b = func(a);
    printf("m:a = %d, b = %d\n", a, b);
    return 0;
}