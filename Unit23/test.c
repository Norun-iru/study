#include <stdio.h>
int main(void){
    int i;
    int *px;

    i = 10;

    *px = &i;

    printf("%d", px);


}