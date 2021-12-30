#include <stdio.h>
int main(void){
    int a = 50, b = 100;
    int *p1, *p2;

    p1 = &a; p2 = &b;
    printf("%d\n",a);
    printf("%d\n",*p1);
    *p1 = 55;
    printf("%d\n",*p1 + *p2);
    p1 = p2;
    printf("%d\n",*p1 + *p2);
    return 0;
}