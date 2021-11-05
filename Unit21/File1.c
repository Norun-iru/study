#include <stdio.h>
#include "inc.h"

int main(void){
    double a, b;
    printf("Input a, b\n");
    scanf("%lf, %lf", &a, &b);

    printf("%f\n", func(a, b));
    printf("%f\n", func2(a, b));
    return 0;
}