#include <stdio.h>
int main(void){
    int a;
    int *p;

    a = 123;
    p = &a;

    printf("a: %d, &a: %p, p: %p, &p: %p, *p: %d", a,&a,p,&p,*p);
    return 0;
}