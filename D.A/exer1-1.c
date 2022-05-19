#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    float x;
    x = ( a + b + c)/3.0;

    printf("%.2f",x);

    return 0;
}