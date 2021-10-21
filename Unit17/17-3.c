#include <stdio.h>
#include <math.h>

int main(void){
    int x;
    printf("実数X:");
    scanf("%d",&x);

    double a,b;
    a = sqrt(x);
    b = pow(x,2.0);

    printf("%f, %.0f", a, b);

    return 0;
}