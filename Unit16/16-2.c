#include <stdio.h>
int main(void){
    int a, b;
    unsigned int ua, ub;
    scanf("%d", &a);
    scanf("%u", &ua);
    b = (~a) + 1;
    ub = (~ua) + 1;
    printf("a:%d b:%d\n", a, b);
    printf("ua:%u ub:%u\n", ua, ub);
    return 0;
}