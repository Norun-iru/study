#include <stdio.h>
#include <math.h>

typedef struct zh{
    double x;
    double y;
}ZH;

int main(void){
    ZH pi1, pi2, mi;
    pi1.x = 3;

    printf("１つ目の点\nx:"); scanf("%lf",&pi1.x);
    printf("y:"); scanf("%lf",&pi1.y);
    printf("２つ目の点\nx:"); scanf("%lf",&pi2.x);
    printf("y:"); scanf("%lf",&pi2.y);
    printf("距離: %.2f", sqrt(pow(pi2.x - pi1.x,2.0) + pow(pi2.y - pi1.y,2.0)));
    printf("\n");
    
    mi.x = (pi2.x + pi1.x) / 2.0;
    mi.y = (pi2.y + pi1.y) / 2.0;
    printf("中点 x: %.2f, y: %.2f", mi.x,mi.y);


    return 0;
}
