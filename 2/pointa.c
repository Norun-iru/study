#include <stdio.h>
void swap(int *, int *);

int main(void){
    int a = 1, b = 810;
    swap(&a,&b);
    printf("a: %d, b: %d", a, b);
    
    return 0;
}

void swap(int *pA, int *pB){
    int tmp = *pA;
    *pA = *pB;
    *pB = tmp;
}