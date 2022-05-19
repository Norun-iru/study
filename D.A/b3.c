#include <stdio.h>
#include <math.h>

int  main(void){
    int  a = 0;
    printf("ビット数:");
    scanf("%d", &a);

    printf("表現できるデータの個数: %.f", pow(2,a) );

    return 0;
}