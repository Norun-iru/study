#include <stdio.h>
int main(void){
    int num;
    int *ptr;
    num = 500;
    ptr = &num;
    printf("num : %d , ptr : %d \n", num, *ptr);
    return 0;
}