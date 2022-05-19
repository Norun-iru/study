#include <stdio.h>
int main(void){
    float a,b;
    scanf("%f", &a);
    scanf("%f", &b);

    if(a >= b){
        printf("%.2f,%.2f",a,b);
    }else{
        printf("%.2f,%.2f",b,a);
    }

    return 0;
}