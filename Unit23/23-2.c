#include <stdio.h>
int swap(int *px, int *py){
    int tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
    return 0;
}

int main(void){
    int i, j;
    i = 10;
    j = 5;

    printf("i = %d, j = %d \n", i, j);
    swap(&i,&j);
    printf("i = %d, i = %d \n", i, j);

    return 0;
}
