#include <stdio.h>
int plus( int a, int b ){
    int c;
    c = a + b;
    return c;
}

int main(void){
    int x,y,z;
    printf("整数1:"); scanf("%d",&x);
    printf("整数2:"); scanf("%d",&y);
    z = plus(x,y);
    printf("%d と %d の和は %d です\n", x,y,z);
    return 0;
}