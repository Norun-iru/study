#include <stdio.h>
void func(int a, int b){
    a = 2 * a;
    b = 3 * b;
    printf("func: a=%d b=%d\n", a,b);
}

int main(void){
    int a = 2, b = 3;
    printf("main1: a=%d b=%d\n", a, b);
    func(a, b);
    printf("main2: a=%d b=%d\n", a, b);
    return 0;
}