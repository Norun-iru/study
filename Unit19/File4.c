#include <stdio.h>
int func(int);

int main(void){
    int a, b;

    printf("Input a\n");
    scanf("%d", &a);
    b = func(a);
    printf("m:a=%d , b=%d\n", a, b);
    b = func(a);
    printf("m:a=%d , b=%d\n", a, b);
    return 0;
}