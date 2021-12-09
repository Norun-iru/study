#include <stdio.h>

int swap(int x, int y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    return 0;
}

int main(void){
    int i, j;
    i = 10; j = 5;
    
    printf("i = %d, j = %d \n", i, j);
    swap(i, j);
    printf("i = %d, j = %d \n", i, j);

    return 0;
}