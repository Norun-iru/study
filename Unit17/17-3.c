#include <stdio.h>
#include <math.h>

int main(void){
    double x;
    printf("実数X:");
    scanf("%lf",&x);

    double a,b;
    a = sqrt(x);
    b = pow(x,2.0);

    printf("%f, %f", a, b);

    return 0;
}